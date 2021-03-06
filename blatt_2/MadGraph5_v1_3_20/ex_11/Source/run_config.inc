c*********************************************************************
c     Parameters to configure running information for MadEvent
c     The default values of these parameters should not need to be
c     changed, unless there is a special need for optimization
c*********************************************************************
c
c     The following parameters are used by symmetry.f in setting up the survey
c
      integer    icomp
      parameter (icomp = 3)   !BW + Symmetry compression  0 == none	
      integer    min_events_subprocess          !Minimum number of events
      parameter (min_events_subprocess = 1000) !per iteration in each subprocess
      integer    min_events_channel         !Minimum number of events
      parameter (min_events_channel = 1000) !per iteration in each channel
      integer    iter_survey                !Number of iterations for survey
      parameter (iter_survey=5)             ! JA 8/17/11
c     The following sets the maximum number of parameters in the run_card.dat
      integer maxpara
      parameter (maxpara=1000)
c
c     The following parameters are used by gen_ximprove.f in running refine
c
      integer    min_events                 !Minimum number of events/iteration
      parameter (min_events = 1000)         !to refine a channel
      integer    max_events                 !Maximum number of events/iteration
      parameter (max_events = 2000)        !to refine a channel
      integer    max_iter                   !Maximum number of iterations
      parameter (max_iter = 9)              !during refinement
      integer    MaxEventsPerJob            !Maximum number of events requested from a single job
      parameter (MaxEventsPerJob=1000)	
c
c     The following are used for parallel running
c
      character*(20) PBS_QUE
      parameter     (PBS_QUE = 'madgraph')

      integer    ChanPerJob
      parameter (ChanPerJob=2)  !Number of channels / job for survey

c      integer    max_np
c      parameter (max_np=1)  !Number of channels / job for refine
c
c
c
	double precision trunc_max
        parameter (trunc_max=0.01)
c
c	The following are used for grid type running
c
      double precision acc_wu
      parameter       (acc_wu = 0.01)   !Desired accuracy from warmup run
      integer      npoints_wu,        itmax_wu !warmup # points/iterations
      parameter   (npoints_wu = 2000, itmax_wu = 8)
      integer      min_gevents_wu
      parameter   (min_gevents_wu=1000)   !Minumum # unweighted events to generate from channel
