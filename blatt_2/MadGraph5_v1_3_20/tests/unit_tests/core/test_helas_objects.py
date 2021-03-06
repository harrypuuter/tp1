################################################################################
#
# Copyright (c) 2009 The MadGraph Development team and Contributors
#
# This file is a part of the MadGraph 5 project, an application which 
# automatically generates Feynman diagrams and matrix elements for arbitrary
# high-energy processes in the Standard Model and beyond.
#
# It is subject to the MadGraph license which should accompany this 
# distribution.
#
# For more information, please visit: http://madgraph.phys.ucl.ac.be
#
################################################################################
from madgraph.iolibs import helas_call_writers

"""Unit test library for the helas_objects module"""

import copy

import tests.unit_tests as unittest

import madgraph.core.base_objects as base_objects
import madgraph.core.helas_objects as helas_objects
import madgraph.core.diagram_generation as diagram_generation
import madgraph.core.color_amp as color_amp
import madgraph.core.color_algebra as color
import madgraph.iolibs.export_v4 as export_v4
import models.import_ufo as import_ufo

#===============================================================================
# HelasWavefunctionTest
#===============================================================================
class HelasWavefunctionTest(unittest.TestCase):
    """Test class for the HelasWavefunction object"""

    mydict = {}
    mywavefunction = None
    mymothers = helas_objects.HelasWavefunctionList()

    def test_setget_wavefunction_exceptions(self):
        "Test error raising in HelasWavefunction __init__, get and set"

        mywavefunction = helas_objects.HelasWavefunction()

        wrong_dict = self.mydict
        wrong_dict['wrongparam'] = 'wrongvalue'

        a_number = 0

        # Test init
        self.assertRaises(helas_objects.HelasWavefunction.PhysicsObjectError,
                          helas_objects.HelasWavefunction,
                          wrong_dict)
        self.assertRaises(AssertionError,
                          helas_objects.HelasWavefunction,
                          a_number)

        # Test get
        self.assertRaises(AssertionError,
                          mywavefunction.get,
                          a_number)
        self.assertRaises(helas_objects.HelasWavefunction.PhysicsObjectError,
                          mywavefunction.get,
                          'wrongparam')

        # Test set
        self.assertRaises(AssertionError,
                          mywavefunction.set,
                          a_number, 0)
        self.assertRaises(helas_objects.HelasWavefunction.PhysicsObjectError,
                          mywavefunction.set,
                          'wrongparam', 0)

    def test_values_for_prop(self):
        """Test filters for wavefunction properties"""

        test_values = [
                       {'prop':'interaction_id',
                        'right_list':[0, 3],
                        'wrong_list':['', 0.0]},
                       {'prop':'number',
                        'right_list':[1, 2, 3, 4, 5],
                        'wrong_list':['a', {}]},
                       {'prop':'state',
                        'right_list':['incoming', 'outgoing', 'intermediate'],
                        'wrong_list':[0, 'wrong']}
                       ]

        temp_wavefunction = helas_objects.HelasWavefunction()

        for test in test_values:
            for x in test['right_list']:
                self.assert_(temp_wavefunction.set(test['prop'], x))
            for x in test['wrong_list']:
                self.assertFalse(temp_wavefunction.set(test['prop'], x))


#===============================================================================
# HelasAmplitudeTest
#===============================================================================
class HelasAmplitudeTest(unittest.TestCase):
    """Test class for the HelasAmplitude object"""

    mydict = {}
    myamplitude = None
    mywavefunctions = None

    def test_setget_amplitude_exceptions(self):
        "Test error raising in HelasAmplitude __init__, get and set"

        myamplitude = helas_objects.HelasAmplitude()

        wrong_dict = self.mydict
        wrong_dict['wrongparam'] = 'wrongvalue'

        a_number = 0

        # Test init
        self.assertRaises(helas_objects.HelasAmplitude.PhysicsObjectError,
                          helas_objects.HelasAmplitude,
                          wrong_dict)
        self.assertRaises(AssertionError,
                          helas_objects.HelasAmplitude,
                          a_number)

        # Test get
        self.assertRaises(AssertionError,
                          myamplitude.get,
                          a_number)
        self.assertRaises(helas_objects.HelasAmplitude.PhysicsObjectError,
                          myamplitude.get,
                          'wrongparam')

        # Test set
        self.assertRaises(AssertionError,
                          myamplitude.set,
                          a_number, 0)
        self.assertRaises(helas_objects.HelasAmplitude.PhysicsObjectError,
                          myamplitude.set,
                          'wrongparam', 0)

    def test_values_for_prop(self):
        """Test filters for amplitude properties"""

        test_values = [
                       {'prop':'interaction_id',
                        'right_list':[0, 3],
                        'wrong_list':['', 0.0]},
                       {'prop':'number',
                        'right_list':[1, 2, 3, 4, 5],
                        'wrong_list':['a', {}]},
                       {'prop':'fermionfactor',
                        'right_list':[-1, 1, 0],
                        'wrong_list':['a', {}, 0.]}
                       ]

        temp_amplitude = helas_objects.HelasAmplitude()

        for test in test_values:
            for x in test['right_list']:
                self.assert_(temp_amplitude.set(test['prop'], x))
            for x in test['wrong_list']:
                self.assertFalse(temp_amplitude.set(test['prop'], x))

    def test_sign_flips_to_order(self):
        """Test the sign from flips to order a list"""

        mylist = []

        mylist.append(3)
        mylist.append(2)
        mylist.append(6)
        mylist.append(4)

        self.assertEqual(helas_objects.HelasAmplitude().sign_flips_to_order(mylist), 1)

        mylist[3] = 1
        self.assertEqual(helas_objects.HelasAmplitude().sign_flips_to_order(mylist), -1)

#===============================================================================
# HelasDiagramTest
#===============================================================================
class HelasDiagramTest(unittest.TestCase):
    """Test class for the HelasDiagram object"""

    mydict = {}
    mywavefunctions = None
    myamplitude = None
    mydiagram = None

    def test_setget_diagram_exceptions(self):
        "Test error raising in HelasDiagram __init__, get and set"

        mydiagram = helas_objects.HelasDiagram()

        wrong_dict = self.mydict
        wrong_dict['wrongparam'] = 'wrongvalue'

        a_number = 0

        # Test init
        self.assertRaises(helas_objects.HelasDiagram.PhysicsObjectError,
                          helas_objects.HelasDiagram,
                          wrong_dict)
        self.assertRaises(AssertionError,
                          helas_objects.HelasDiagram,
                          a_number)

        # Test get
        self.assertRaises(AssertionError,
                          mydiagram.get,
                          a_number)
        self.assertRaises(helas_objects.HelasDiagram.PhysicsObjectError,
                          mydiagram.get,
                          'wrongparam')

        # Test set
        self.assertRaises(AssertionError,
                          mydiagram.set,
                          a_number, 0)
        self.assertRaises(helas_objects.HelasDiagram.PhysicsObjectError,
                          mydiagram.set,
                          'wrongparam', 0)

#===============================================================================
# HelasMatrixElementTest
#===============================================================================
class HelasMatrixElementTest(unittest.TestCase):
    """Test class for the HelasMatrixElement object"""

    mydict = {}
    mywavefunctions = None
    myamplitude = None
    mydiagrams = None
    mymatrixelement = None
    mymodel = base_objects.Model()


    def setUp(self):

        # Set up model

        mypartlist = base_objects.ParticleList()
        myinterlist = base_objects.InteractionList()

        # A gluon
        mypartlist.append(base_objects.Particle({'name':'g',
                      'antiname':'g',
                      'spin':3,
                      'color':8,
                      'mass':'zero',
                      'width':'zero',
                      'texname':'g',
                      'antitexname':'g',
                      'line':'curly',
                      'charge':0.,
                      'pdg_code':21,
                      'propagating':True,
                      'is_part':True,
                      'self_antipart':True}))

        g = mypartlist[len(mypartlist) - 1]

        # A quark U and its antiparticle
        mypartlist.append(base_objects.Particle({'name':'u',
                      'antiname':'u~',
                      'spin':2,
                      'color':3,
                      'mass':'zero',
                      'width':'zero',
                      'texname':'u',
                      'antitexname':'\bar u',
                      'line':'straight',
                      'charge':2. / 3.,
                      'pdg_code':2,
                      'propagating':True,
                      'is_part':True,
                      'self_antipart':False}))
        u = mypartlist[len(mypartlist) - 1]
        antiu = copy.copy(u)
        antiu.set('is_part', False)

        # A electron and positron
        mypartlist.append(base_objects.Particle({'name':'e-',
                      'antiname':'e+',
                      'spin':2,
                      'color':1,
                      'mass':'zero',
                      'width':'zero',
                      'texname':'e^-',
                      'antitexname':'e^+',
                      'line':'straight',
                      'charge':-1.,
                      'pdg_code':11,
                      'propagating':True,
                      'is_part':True,
                      'self_antipart':False}))
        eminus = mypartlist[len(mypartlist) - 1]
        eplus = copy.copy(eminus)
        eplus.set('is_part', False)

        # A photon
        mypartlist.append(base_objects.Particle({'name':'a',
                      'antiname':'a',
                      'spin':3,
                      'color':1,
                      'mass':'zero',
                      'width':'zero',
                      'texname':'\gamma',
                      'antitexname':'\gamma',
                      'line':'wavy',
                      'charge':0.,
                      'pdg_code':22,
                      'propagating':True,
                      'is_part':True,
                      'self_antipart':True}))
        a = mypartlist[len(mypartlist) - 1]


        # A E slepton and its antiparticle
        mypartlist.append(base_objects.Particle({'name':'sl2-',
                      'antiname':'sl2+',
                      'spin':1,
                      'color':1,
                      'mass':'Msl2',
                      'width':'Wsl2',
                      'texname':'\tilde e^-',
                      'antitexname':'\tilde e^+',
                      'line':'dashed',
                      'charge':1.,
                      'pdg_code':1000011,
                      'propagating':True,
                      'is_part':True,
                      'self_antipart':False}))
        seminus = mypartlist[len(mypartlist) - 1]
        seplus = copy.copy(seminus)
        seplus.set('is_part', False)

        # A neutralino
        mypartlist.append(base_objects.Particle({'name':'n1',
                      'antiname':'n1',
                      'spin':2,
                      'color':1,
                      'mass':'Mneu1',
                      'width':'Wneu1',
                      'texname':'\chi_0^1',
                      'antitexname':'\chi_0^1',
                      'line':'straight',
                      'charge':0.,
                      'pdg_code':1000022,
                      'propagating':True,
                      'is_part':True,
                      'self_antipart':True}))
        n1 = mypartlist[len(mypartlist) - 1]

        # Gluon and photon couplings to quarks
        myinterlist.append(base_objects.Interaction({
                      'id': 3,
                      'particles': base_objects.ParticleList(\
                                            [u, \
                                             antiu, \
                                             g]),
                      'color': [color.ColorString([color.T(2, 0, 1)])],
                      'lorentz':[''],
                      'couplings':{(0, 0):'GG'},
                      'orders':{'QCD':1}}))

        myinterlist.append(base_objects.Interaction({
                      'id': 4,
                      'particles': base_objects.ParticleList(\
                                            [u, \
                                             antiu, \
                                             a]),
                      'color': [color.ColorString([color.T(0, 1)])],
                      'lorentz':[''],
                      'couplings':{(0, 0):'MGVX15'},
                      'orders':{'QED':1}}))

        # Coupling of e to gamma
        myinterlist.append(base_objects.Interaction({
                      'id': 7,
                      'particles': base_objects.ParticleList(\
                                            [eminus, \
                                             eplus, \
                                             a]),
                      'color': [],
                      'lorentz':[''],
                      'couplings':{(0, 0):'MGVX12'},
                      'orders':{'QED':1}}))

        # Gluon self-couplings
        myinterlist.append(base_objects.Interaction({
                      'id': 8,
                      'particles': base_objects.ParticleList(\
                                            [g, \
                                             g, \
                                             g]),
                      'color': [color.ColorString([color.f(0, 1, 2)])],
                      'lorentz':[''],
                      'couplings':{(0, 0):'GG'},
                      'orders':{'QCD':1}}))

        myinterlist.append(base_objects.Interaction({
                      'id': 9,
                      'particles': base_objects.ParticleList(\
                                            [g, \
                                             g, \
                                             g,
                                             g]),
                      'color': [color.ColorString([color.f(0, 1, 2)]),
                                color.ColorString([color.f(1, 2, 0)]),
                                color.ColorString([color.f(2, 0, 1)])],
                      'lorentz':['gggg1', 'gggg2', 'gggg3'],
                      'couplings':{(0, 0):'GG',(1, 1):'GG',(2, 2):'GG'},
                      'orders':{'QCD':2}}))


        self.mymodel.set('particles', mypartlist)
        self.mymodel.set('interactions', myinterlist)

        # Coupling of n1 to e and se
        myinterlist.append(base_objects.Interaction({
                      'id': 103,
                      'particles': base_objects.ParticleList(\
                                            [n1, \
                                             eminus, \
                                             seplus]),
                      'color': [],
                      'lorentz':[''],
                      'couplings':{(0, 0):'MGVX350'},
                      'orders':{'QED':1}}))

        myinterlist.append(base_objects.Interaction({
                      'id': 104,
                      'particles': base_objects.ParticleList(\
                                            [eplus, \
                                             n1, \
                                             seminus]),
                      'color': [],
                      'lorentz':[''],
                      'couplings':{(0, 0):'MGVX494'},
                      'orders':{'QED':1}}))

    def test_setget_matrix_element_exceptions(self):
        "Test error raising in HelasMatrixElement __init__, get and set"

        wrong_dict = {}
        wrong_dict['wrongparam'] = 'wrongvalue'

        mymatrixelement = helas_objects.HelasMatrixElement()

        a_number = 0

        # Test init
        self.assertRaises(helas_objects.HelasMatrixElement.PhysicsObjectError,
                          helas_objects.HelasMatrixElement,
                          wrong_dict)
        self.assertRaises(AssertionError,
                          helas_objects.HelasMatrixElement,
                          a_number)

        # Test get
        self.assertRaises(AssertionError,
                          mymatrixelement.get,
                          a_number)
        self.assertRaises(helas_objects.HelasMatrixElement.PhysicsObjectError,
                          mymatrixelement.get,
                          'wrongparam')

        # Test set
        self.assertRaises(AssertionError,
                          mymatrixelement.set,
                          a_number, 0)
        self.assertRaises(helas_objects.HelasMatrixElement.PhysicsObjectError,
                          mymatrixelement.set,
                          'wrongparam', 0)

#    def test_representation(self):
#        """Test matrix_element object string representation."""
#
#        goal = "{\n"
#        goal = goal + "    \'processes\': [],\n"
#        goal = goal + "    \'diagrams\': " + repr(self.mydiagrams) + "\n}"
#
#        self.assertEqual(goal, str(self.mymatrixelement))


    def test_process_init(self):
        """Testing the process initialization using the process
        e- e+ > e- e+
        """

        # Test e+ e- > e+ e-

        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':11,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':-11,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':11,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':-11,
                                         'state':True}))

        myproc = base_objects.Process({'legs':myleglist,
                                       'model':self.mymodel})

        myamplitude = diagram_generation.Amplitude({'process': myproc})

        matrix_element = helas_objects.HelasMatrixElement(myamplitude)

        self.assertEqual(matrix_element.get('processes')[0],
                         myamplitude.get('process'))

    def test_get_den_factor(self):
        """Testing helicity matrix using the process
        u u~ > a a a
        """

        # A Z
        self.mymodel.get('particles').append(base_objects.Particle({'name':'Z',
                      'antiname':'Z',
                      'spin':3,
                      'color':1,
                      'mass':'MZ',
                      'width':'WZ',
                      'texname':'Z',
                      'antitexname':'Z',
                      'line':'wavy',
                      'charge':0.,
                      'pdg_code':23,
                      'propagating':True,
                      'is_part':True,
                      'self_antipart':True}))

        self.mymodel.set('particle_dict',
                         self.mymodel.get('particles').generate_dict())

        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':2,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':-2,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':22,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':22,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':22,
                                         'state':True}))

        myproc = base_objects.Process({'legs':myleglist,
                                       'model':self.mymodel})

        matrix_element = helas_objects.HelasMatrixElement()
        matrix_element.set('processes', base_objects.ProcessList([ myproc ]))
        matrix_element.calculate_identical_particle_factor()

        self.assertEqual(matrix_element.get_denominator_factor(), 9 * 4 * 6)

        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':22,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':23,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':22,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':22,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':22,
                                         'state':True}))

        myproc = base_objects.Process({'legs':myleglist,
                                       'model':self.mymodel})

        matrix_element = helas_objects.HelasMatrixElement()
        matrix_element.set('processes', base_objects.ProcessList([ myproc ]))
        matrix_element.calculate_identical_particle_factor()

        self.assertEqual(matrix_element.get_denominator_factor(), 1 * 6 * 6)

    def test_fermionfactor_emep_emep(self):
        """Testing the fermion factor using the process  e- e+ > e- e+
        """

        # Test e+ e- > e+ e-

        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':11,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':-11,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':11,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':-11,
                                         'state':True}))

        myproc = base_objects.Process({'legs':myleglist,
                                       'model':self.mymodel})

        myamplitude = diagram_generation.Amplitude({'process': myproc})

        myamplitude.get('diagrams')

        matrix_element = helas_objects.HelasMatrixElement(myamplitude)

        diagrams = matrix_element.get('diagrams')

        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[1].get('amplitudes')[0].get('fermionfactor'), -1)

    def test_fermionfactor_emep_emepa(self):
        """Testing the fermion factor using the process  e- e+ > e- e+ a
        """

        # Test e+ e- > e+ e- a

        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':11,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':-11,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':11,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':-11,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':22,
                                         'state':True}))

        myproc = base_objects.Process({'legs':myleglist,
                                       'model':self.mymodel})

        myamplitude = diagram_generation.Amplitude({'process': myproc})

        myamplitude.get('diagrams')

        matrix_element = helas_objects.HelasMatrixElement(myamplitude)

        diagrams = matrix_element.get('diagrams')

        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[1].get('amplitudes')[0].get('fermionfactor'), 1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[2].get('amplitudes')[0].get('fermionfactor'), -1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[3].get('amplitudes')[0].get('fermionfactor'), -1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[4].get('amplitudes')[0].get('fermionfactor'), -1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[5].get('amplitudes')[0].get('fermionfactor'), 1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[6].get('amplitudes')[0].get('fermionfactor'), -1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[7].get('amplitudes')[0].get('fermionfactor'), 1)

    def test_fermionfactor_emep_emepemep(self):
        """Testing the fermion factor using the process e- e+ > e- e+ e- e+
        Time estimates for e+e->e+e-e+e-e+e- (1728 diagrams):
        Diagram generation: 18 s
        Helas call generation (with optimization): 58 s
        Helas call generation (without optimization): 23 s
        Fermion factor calculation: 0 s
        """

        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':11,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':-11,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':11,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':-11,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':11,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':-11,
                                         'state':True}))

        myproc = base_objects.Process({'legs':myleglist,
                                       'model':self.mymodel})

        myamplitude = diagram_generation.Amplitude({'process': myproc})

        #print myamplitude.get('process').nice_string()

        myamplitude.get('diagrams')

        #print "diagrams: ", myamplitude.get('diagrams').nice_string()

        matrix_element = helas_objects.HelasMatrixElement(myamplitude)

        #print "\n".join(helas_objects.HelasFortranModel().\
        #      get_matrix_element_calls(matrix_element))
        #print helas_objects.HelasFortranModel().\
        #      get_JAMP_line(matrix_element)

        diagrams = matrix_element.get('diagrams')

        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[1].get('amplitudes')[0].get('fermionfactor'), 1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[2].get('amplitudes')[0].get('fermionfactor'), -1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[3].get('amplitudes')[0].get('fermionfactor'), -1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[4].get('amplitudes')[0].get('fermionfactor'), -1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[5].get('amplitudes')[0].get('fermionfactor'), -1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[6].get('amplitudes')[0].get('fermionfactor'), 1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[7].get('amplitudes')[0].get('fermionfactor'), 1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[8].get('amplitudes')[0].get('fermionfactor'), -1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[9].get('amplitudes')[0].get('fermionfactor'), -1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[10].get('amplitudes')[0].get('fermionfactor'), 1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[11].get('amplitudes')[0].get('fermionfactor'), 1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[12].get('amplitudes')[0].get('fermionfactor'), 1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[13].get('amplitudes')[0].get('fermionfactor'), 1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[14].get('amplitudes')[0].get('fermionfactor'), -1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[15].get('amplitudes')[0].get('fermionfactor'), -1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[16].get('amplitudes')[0].get('fermionfactor'), 1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[17].get('amplitudes')[0].get('fermionfactor'), 1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[18].get('amplitudes')[0].get('fermionfactor'), -1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[19].get('amplitudes')[0].get('fermionfactor'), -1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[20].get('amplitudes')[0].get('fermionfactor'), -1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[21].get('amplitudes')[0].get('fermionfactor'), -1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[22].get('amplitudes')[0].get('fermionfactor'), 1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[23].get('amplitudes')[0].get('fermionfactor'), 1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[24].get('amplitudes')[0].get('fermionfactor'), 1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[25].get('amplitudes')[0].get('fermionfactor'), 1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[26].get('amplitudes')[0].get('fermionfactor'), -1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[27].get('amplitudes')[0].get('fermionfactor'), -1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[28].get('amplitudes')[0].get('fermionfactor'), -1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[29].get('amplitudes')[0].get('fermionfactor'), -1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[30].get('amplitudes')[0].get('fermionfactor'), 1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[31].get('amplitudes')[0].get('fermionfactor'), 1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[32].get('amplitudes')[0].get('fermionfactor'), 1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[33].get('amplitudes')[0].get('fermionfactor'), 1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[34].get('amplitudes')[0].get('fermionfactor'), -1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[35].get('amplitudes')[0].get('fermionfactor'), -1)

    def test_fermionfactor_epem_sepsemepem(self):
        """Testing the fermion factor using the process e+ e- > se+ se- e+ e-
        """

        # Set up model

        mypartlist = base_objects.ParticleList()
        myinterlist = base_objects.InteractionList()

        # A electron and positron
        mypartlist.append(base_objects.Particle({'name':'e+',
                      'antiname':'e-',
                      'spin':2,
                      'color':1,
                      'mass':'me',
                      'width':'zero',
                      'texname':'e^+',
                      'antitexname':'e^-',
                      'line':'straight',
                      'charge':-1.,
                      'pdg_code':11,
                      'propagating':True,
                      'is_part':True,
                      'self_antipart':False}))
        eminus = mypartlist[len(mypartlist) - 1]
        eplus = copy.copy(eminus)
        eplus.set('is_part', False)

        # A E slepton and its antiparticle
        mypartlist.append(base_objects.Particle({'name':'sl2-',
                      'antiname':'sl2+',
                      'spin':1,
                      'color':1,
                      'mass':'Msl2',
                      'width':'Wsl2',
                      'texname':'\tilde e^-',
                      'antitexname':'\tilde e^+',
                      'line':'dashed',
                      'charge':1.,
                      'pdg_code':1000011,
                      'propagating':True,
                      'is_part':True,
                      'self_antipart':False}))
        seminus = mypartlist[len(mypartlist) - 1]
        seplus = copy.copy(seminus)
        seplus.set('is_part', False)

        # A neutralino
        mypartlist.append(base_objects.Particle({'name':'n1',
                      'antiname':'n1',
                      'spin':2,
                      'color':1,
                      'mass':'Mneu1',
                      'width':'Wneu1',
                      'texname':'\chi_0^1',
                      'antitexname':'\chi_0^1',
                      'line':'straight',
                      'charge':0.,
                      'pdg_code':1000022,
                      'propagating':True,
                      'is_part':True,
                      'self_antipart':True}))
        n1 = mypartlist[len(mypartlist) - 1]

        # Coupling of n1 to e and se
        myinterlist.append(base_objects.Interaction({
                      'id': 103,
                      'particles': base_objects.ParticleList(\
                                            [n1, \
                                             eminus, \
                                             seplus]),
                      'color': [],
                      'lorentz':[''],
                      'couplings':{(0, 0):'MGVX350'},
                      'orders':{'QED':1}}))

        myinterlist.append(base_objects.Interaction({
                      'id': 104,
                      'particles': base_objects.ParticleList(\
                                            [eplus, \
                                             n1, \
                                             seminus]),
                      'color': [],
                      'lorentz':[''],
                      'couplings':{(0, 0):'MGVX494'},
                      'orders':{'QED':1}}))

        mybasemodel = base_objects.Model()
        mybasemodel.set('particles', mypartlist)
        mybasemodel.set('interactions', myinterlist)

        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':-11,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':11,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':-1000011,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':1000011,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':-11,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':11,
                                         'state':True}))

        myproc = base_objects.Process({'legs':myleglist,
                                       'model':mybasemodel})

        myamplitude = diagram_generation.Amplitude({'process': myproc})

        myamplitude.get('diagrams')

        matrix_element = helas_objects.HelasMatrixElement(myamplitude)

        diagrams = matrix_element.get('diagrams')

        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[1].get('amplitudes')[0].get('fermionfactor'), -1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[2].get('amplitudes')[0].get('fermionfactor'), -1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[3].get('amplitudes')[0].get('fermionfactor'), 1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[4].get('amplitudes')[0].get('fermionfactor'), -1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[5].get('amplitudes')[0].get('fermionfactor'), 1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[6].get('amplitudes')[0].get('fermionfactor'), -1)
        self.assertEqual(diagrams[0].get('amplitudes')[0].get('fermionfactor') * \
                         diagrams[7].get('amplitudes')[0].get('fermionfactor'), 1)

    def test_generate_helas_diagrams_uux_gepem(self):
        """Testing the helas diagram generation u u~ > g e+ e-
        """

        # Test u u~ > g e+ e-

        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':2,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':-2,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':21,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':11,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':-11,
                                         'state':True}))

        myproc = base_objects.Process({'legs':myleglist,
                                       'model':self.mymodel})

        myamplitude = diagram_generation.Amplitude({'process': myproc})

        goal = "2 diagrams:\n"
        goal = goal + "1  ((1(-2),3(21)>1(-2),id:3),(4(11),5(-11)>4(22),id:7),(1(-2),2(2),4(22),id:4)) (QCD=1,QED=2,WEIGHTED=5)\n"
        goal = goal + "2  ((2(2),3(21)>2(2),id:3),(4(11),5(-11)>4(22),id:7),(1(-2),2(2),4(22),id:4)) (QCD=1,QED=2,WEIGHTED=5)"

        self.assertEqual(goal,
                         myamplitude.get('diagrams').nice_string())

        wavefunctions1 = helas_objects.HelasWavefunctionList()
        wavefunctions1.append(helas_objects.HelasWavefunction(\
            myleglist[0], 0, self.mymodel))
        wavefunctions1[-1].flip_part_antipart()
        wavefunctions1.append(helas_objects.HelasWavefunction(\
            myleglist[1], 0, self.mymodel))
        wavefunctions1[-1].flip_part_antipart()
        wavefunctions1.append(helas_objects.HelasWavefunction(\
            myleglist[2], 0, self.mymodel))
        wavefunctions1.append(helas_objects.HelasWavefunction(\
            myleglist[3], 0, self.mymodel))
        wavefunctions1.append(helas_objects.HelasWavefunction(\
            myleglist[4], 0, self.mymodel))
        wavefunctions1.append(helas_objects.HelasWavefunction())
        wavefunctions1[5].set('particle', -2, self.mymodel)
        wavefunctions1[5].set('number_external', 1)
        wavefunctions1[5].set('state', 'incoming')
        wavefunctions1[5].set('is_part',
                              False)
        wavefunctions1[5].set('mothers',
                              helas_objects.HelasWavefunctionList(\
                         [wavefunctions1[0], wavefunctions1[2]]))
        wavefunctions1[5].set('interaction_id', 3, self.mymodel)
        wavefunctions1[5].set('number', 6)
        wavefunctions1.append(helas_objects.HelasWavefunction())
        wavefunctions1[6].set('particle', 22, self.mymodel)
        wavefunctions1[6].set('number_external', 4)
        wavefunctions1[6].set('state', 'intermediate')
        wavefunctions1[6].set('mothers', helas_objects.HelasWavefunctionList(
                         [wavefunctions1[3], wavefunctions1[4]]))
        wavefunctions1[6].set('interaction_id', 7, self.mymodel)
        wavefunctions1[6].set('number', 7)

        amplitude1 = helas_objects.HelasAmplitudeList([\
            helas_objects.HelasAmplitude({\
             'mothers': helas_objects.HelasWavefunctionList(\
                         [wavefunctions1[5], wavefunctions1[1],
                          wavefunctions1[6]]),
             'number': 1,
             'fermionfactor':-1})])
        amplitude1[0].set('interaction_id', 4, self.mymodel)

        wavefunctions2 = helas_objects.HelasWavefunctionList()
        wavefunctions2.append(helas_objects.HelasWavefunction())
        wavefunctions2[0].set('particle', 2, self.mymodel)
        wavefunctions2[0].set('number_external', 2)
        wavefunctions2[0].set('state', 'outgoing')
        wavefunctions2[0].set('is_part', True)
        wavefunctions2[0].set('mothers', helas_objects.HelasWavefunctionList(\
                         [wavefunctions1[1], wavefunctions1[2]]))
        wavefunctions2[0].set('interaction_id', 3, self.mymodel)
        wavefunctions2[0].set('number', 8)

        amplitude2 = helas_objects.HelasAmplitudeList([\
            helas_objects.HelasAmplitude({\
             'mothers': helas_objects.HelasWavefunctionList(\
                         [wavefunctions1[0], wavefunctions2[0],
                          wavefunctions1[6]]),
             'number': 2,
             'fermionfactor':-1})])
        amplitude2[0].set('interaction_id', 4, self.mymodel)

        diagram1 = helas_objects.HelasDiagram({'wavefunctions': wavefunctions1,
                                               'amplitudes': amplitude1,
                                               'number': 1})

        diagram2 = helas_objects.HelasDiagram({'wavefunctions': wavefunctions2,
                                               'amplitudes': amplitude2,
                                               'number': 2})

        diagrams = helas_objects.HelasDiagramList([diagram1, diagram2])

        matrix_element = helas_objects.HelasMatrixElement(\
            myamplitude,
            1)

        self.assertEqual(matrix_element.get('diagrams'), diagrams)

    def test_generate_helas_diagrams_uux_gepem_no_optimization(self):
        """Testing the helas diagram generation u u~ > g e+ e-
        """
        # Test u u~ > g e+ e-

        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':2,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':-2,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':21,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':11,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':-11,
                                         'state':True}))

        myproc = base_objects.Process({'legs':myleglist,
                                       'model':self.mymodel})

        myamplitude = diagram_generation.Amplitude({'process': myproc})

        goal = "2 diagrams:\n"
        goal = goal + "1  ((1(-2),3(21)>1(-2),id:3),(4(11),5(-11)>4(22),id:7),(1(-2),2(2),4(22),id:4)) (QCD=1,QED=2,WEIGHTED=5)\n"
        goal = goal + "2  ((2(2),3(21)>2(2),id:3),(4(11),5(-11)>4(22),id:7),(1(-2),2(2),4(22),id:4)) (QCD=1,QED=2,WEIGHTED=5)"

        self.assertEqual(goal,
                         myamplitude.get('diagrams').nice_string())

        wavefunctions1 = helas_objects.HelasWavefunctionList()
        wavefunctions1.append(helas_objects.HelasWavefunction(\
            myleglist[0], 0, self.mymodel))
        wavefunctions1[-1].flip_part_antipart()
        wavefunctions1.append(helas_objects.HelasWavefunction(\
            myleglist[1], 0, self.mymodel))
        wavefunctions1[-1].flip_part_antipart()
        wavefunctions1.append(helas_objects.HelasWavefunction(\
            myleglist[2], 0, self.mymodel))
        wavefunctions1.append(helas_objects.HelasWavefunction(\
            myleglist[3], 0, self.mymodel))
        wavefunctions1.append(helas_objects.HelasWavefunction(\
            myleglist[4], 0, self.mymodel))
        wavefunctions1.append(helas_objects.HelasWavefunction())
        wavefunctions1[5].set('particle', -2, self.mymodel)
        wavefunctions1[5].set('number_external', 1)
        wavefunctions1[5].set('state', 'incoming')
        wavefunctions1[5].set('is_part', False)
        wavefunctions1[5].set('mothers',
                              helas_objects.HelasWavefunctionList(\
                         [wavefunctions1[0], wavefunctions1[2]]))
        wavefunctions1[5].set('interaction_id', 3, self.mymodel)
        wavefunctions1[5].set('number', 6)
        wavefunctions1.append(helas_objects.HelasWavefunction())
        wavefunctions1[6].set('particle', 22, self.mymodel)
        wavefunctions1[6].set('number_external', 4)
        wavefunctions1[6].set('state', 'intermediate')
        wavefunctions1[6].set('mothers', helas_objects.HelasWavefunctionList(
                         [wavefunctions1[3], wavefunctions1[4]]))
        wavefunctions1[6].set('interaction_id', 7, self.mymodel)
        wavefunctions1[6].set('number', 7)

        amplitude1 = helas_objects.HelasAmplitudeList([\
            helas_objects.HelasAmplitude({\
             'mothers': helas_objects.HelasWavefunctionList(\
                         [wavefunctions1[5], wavefunctions1[1],
                          wavefunctions1[6]]),
             'number': 1,
             'fermionfactor':-1})])
        amplitude1[0].set('interaction_id', 4, self.mymodel)

        wavefunctions2 = helas_objects.HelasWavefunctionList()
        wavefunctions2.append(helas_objects.HelasWavefunction(\
            myleglist[0], 0, self.mymodel))
        wavefunctions2[-1].flip_part_antipart()
        wavefunctions2.append(helas_objects.HelasWavefunction(\
            myleglist[1], 0, self.mymodel))
        wavefunctions2[-1].flip_part_antipart()
        wavefunctions2.append(helas_objects.HelasWavefunction(\
            myleglist[2], 0, self.mymodel))
        wavefunctions2.append(helas_objects.HelasWavefunction(\
            myleglist[3], 0, self.mymodel))
        wavefunctions2.append(helas_objects.HelasWavefunction(\
            myleglist[4], 0, self.mymodel))
        wavefunctions2.append(helas_objects.HelasWavefunction())
        wavefunctions2[5].set('particle', 2, self.mymodel)
        wavefunctions2[5].set('number_external', 2)
        wavefunctions2[5].set('state', 'outgoing')
        wavefunctions2[5].set('is_part', True)
        wavefunctions2[5].set('mothers', helas_objects.HelasWavefunctionList(\
                         [wavefunctions1[1], wavefunctions1[2]]))
        wavefunctions2[5].set('interaction_id', 3, self.mymodel)
        wavefunctions2[5].set('number', 6)
        wavefunctions2.append(helas_objects.HelasWavefunction())
        wavefunctions2[6].set('particle', 22, self.mymodel)
        wavefunctions2[6].set('number_external', 4)
        wavefunctions2[6].set('state', 'intermediate')
        wavefunctions2[6].set('mothers', helas_objects.HelasWavefunctionList(
                         [wavefunctions1[3], wavefunctions1[4]]))
        wavefunctions2[6].set('interaction_id', 7, self.mymodel)
        wavefunctions2[6].set('number', 7)

        amplitude2 = helas_objects.HelasAmplitudeList([\
            helas_objects.HelasAmplitude({\
             'mothers': helas_objects.HelasWavefunctionList(\
                         [wavefunctions2[0], wavefunctions2[5],
                          wavefunctions2[6]]),
             'number': 2,
             'fermionfactor':-1})])
        amplitude2[0].set('interaction_id', 4, self.mymodel)

        diagram1 = helas_objects.HelasDiagram({'wavefunctions': wavefunctions1,
                                               'amplitudes': amplitude1,
                                               'number': 1})

        diagram2 = helas_objects.HelasDiagram({'wavefunctions': wavefunctions2,
                                               'amplitudes': amplitude2,
                                               'number': 2})

        diagrams = helas_objects.HelasDiagramList([diagram1, diagram2])

        matrix_element = helas_objects.HelasMatrixElement(\
            myamplitude,
            0)
        
        self.assertEqual(matrix_element.get('diagrams')[0]['amplitudes'], amplitude1, 
                         '%s != %s' %(matrix_element.get('diagrams')[0]['amplitudes'], amplitude1))
        #self.assertEqual(matrix_element.get('diagrams'), diagrams)

    def test_generate_helas_diagrams_ae_ae(self):
        """Testing the helas diagram generation a e- > a e-
        """

        # Test a e- > a e-

        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':22,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':11,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':22,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':11,
                                         'state':True}))

        myproc = base_objects.Process({'legs':myleglist,
                                       'model':self.mymodel})

        myamplitude = diagram_generation.Amplitude({'process': myproc})

        goal = "2 diagrams:\n"
        goal = goal + "1  ((1(22),2(-11)>1(-11),id:7),(3(22),4(11),1(-11),id:7)) (QCD=0,QED=2,WEIGHTED=4)\n"
        goal = goal + "2  ((1(22),4(11)>1(11),id:7),(2(-11),3(22),1(11),id:7)) (QCD=0,QED=2,WEIGHTED=4)"

        self.assertEqual(goal,
                         myamplitude.get('diagrams').nice_string())

        wavefunctions1 = helas_objects.HelasWavefunctionList()
        wavefunctions1.append(helas_objects.HelasWavefunction(\
            myleglist[0], 0, self.mymodel))
        wavefunctions1.append(helas_objects.HelasWavefunction(\
            myleglist[1], 0, self.mymodel))
        wavefunctions1.append(helas_objects.HelasWavefunction(\
            myleglist[2], 0, self.mymodel))
        wavefunctions1.append(helas_objects.HelasWavefunction(\
            myleglist[3], 0, self.mymodel))
        wavefunctions1.append(helas_objects.HelasWavefunction())
        wavefunctions1[4].set('particle', 11, self.mymodel)
        wavefunctions1[4].set('interaction_id', 7, self.mymodel)
        wavefunctions1[4].set('state', 'incoming')
        wavefunctions1[4].set('number_external', 1)
        wavefunctions1[4].set('mothers',
                              helas_objects.HelasWavefunctionList(\
                         [wavefunctions1[0], wavefunctions1[1]]))
        wavefunctions1[4].set('number', 5)

        amplitude1 = helas_objects.HelasAmplitudeList([\
            helas_objects.HelasAmplitude({\
             'mothers': helas_objects.HelasWavefunctionList(\
                         [wavefunctions1[2], wavefunctions1[3],
                          wavefunctions1[4]]),
             'number': 1,
             'color_indices': [0, 0],
             'fermionfactor': 1})])
        amplitude1[0].set('interaction_id', 7, self.mymodel)

        diagram1 = helas_objects.HelasDiagram({'wavefunctions': wavefunctions1,
                                               'amplitudes': amplitude1,
                                               'number': 1})

        wavefunctions2 = helas_objects.HelasWavefunctionList()

        wavefunctions2.append(helas_objects.HelasWavefunction())
        wavefunctions2[0].set('particle', -11, self.mymodel)
        wavefunctions2[0].set('interaction_id', 7, self.mymodel)
        wavefunctions2[0].set('state', 'outgoing')
        wavefunctions2[0].set('number_external', 1)
        wavefunctions2[0].set('mothers',
                              helas_objects.HelasWavefunctionList(\
                         [wavefunctions1[0], wavefunctions1[3]]))
        wavefunctions2[0].set('number', 6)

        amplitude2 = helas_objects.HelasAmplitudeList([\
            helas_objects.HelasAmplitude({\
             'mothers': helas_objects.HelasWavefunctionList(\
                         [wavefunctions1[1], wavefunctions1[2],
                          wavefunctions2[0]]),
             'interaction_id': 7,
             'number': 2,
             'color_indices': [0, 0],
             'fermionfactor': 1})])
        amplitude2[0].set('interaction_id', 7, self.mymodel)

        diagram2 = helas_objects.HelasDiagram({'wavefunctions': wavefunctions2,
                                               'amplitudes': amplitude2,
                                               'number': 2})

        mydiagrams = helas_objects.HelasDiagramList([diagram1, diagram2])

        matrix_element = helas_objects.HelasMatrixElement(myamplitude, 1)

        self.assertEqual(matrix_element.get('diagrams'), mydiagrams)

    def test_generate_helas_diagrams_ea_ae(self):
        """Testing the helas diagram generation e- a > a e-
        """

        # Test e- a > a e-

        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':11,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':22,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':22,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':11,
                                         'state':True}))

        myproc = base_objects.Process({'legs':myleglist,
                                       'model':self.mymodel})

        myamplitude = diagram_generation.Amplitude({'process': myproc})

        goal = "2 diagrams:\n"
        goal = goal + "1  ((1(-11),2(22)>1(-11),id:7),(3(22),4(11),1(-11),id:7)) (QCD=0,QED=2,WEIGHTED=4)\n"
        goal = goal + "2  ((1(-11),3(22)>1(-11),id:7),(2(22),4(11),1(-11),id:7)) (QCD=0,QED=2,WEIGHTED=4)"

        self.assertEqual(goal,
                         myamplitude.get('diagrams').nice_string())

        wavefunctions1 = helas_objects.HelasWavefunctionList()
        wavefunctions1.append(helas_objects.HelasWavefunction(\
            myleglist[0], 0, self.mymodel))
        wavefunctions1.append(helas_objects.HelasWavefunction(\
            myleglist[1], 0, self.mymodel))
        wavefunctions1.append(helas_objects.HelasWavefunction(\
            myleglist[2], 0, self.mymodel))
        wavefunctions1.append(helas_objects.HelasWavefunction(\
            myleglist[3], 0, self.mymodel))
        wavefunctions1.append(helas_objects.HelasWavefunction())
        wavefunctions1[4].set('particle', 11, self.mymodel)
        wavefunctions1[4].set('interaction_id', 7, self.mymodel)
        wavefunctions1[4].set('number_external', 1)
        wavefunctions1[4].set('state', 'incoming')
        wavefunctions1[4].set('mothers',
                              helas_objects.HelasWavefunctionList(\
                         [wavefunctions1[0], wavefunctions1[1]]))
        wavefunctions1[4].set('number', 5)

        amplitude1 = helas_objects.HelasAmplitudeList([\
            helas_objects.HelasAmplitude({\
             'mothers': helas_objects.HelasWavefunctionList(\
                         [wavefunctions1[2], wavefunctions1[3],
                          wavefunctions1[4]]),
             'number': 1,
             'color_indices': [0, 0],
             'fermionfactor': 1})])
        amplitude1[0].set('interaction_id', 7, self.mymodel)

        diagram1 = helas_objects.HelasDiagram({'wavefunctions': wavefunctions1,
                                               'amplitudes': amplitude1,
                                               'number': 1})

        wavefunctions2 = helas_objects.HelasWavefunctionList()

        wavefunctions2.append(helas_objects.HelasWavefunction())
        wavefunctions2[0].set('particle', 11, self.mymodel)
        wavefunctions2[0].set('interaction_id', 7, self.mymodel)
        wavefunctions2[0].set('number_external', 1)
        wavefunctions2[0].set('state', 'incoming')
        wavefunctions2[0].set('mothers',
                              helas_objects.HelasWavefunctionList(\
                         [wavefunctions1[0], wavefunctions1[2]]))
        wavefunctions2[0].set('number', 6)

        amplitude2 = helas_objects.HelasAmplitudeList([\
            helas_objects.HelasAmplitude({\
             'mothers': helas_objects.HelasWavefunctionList(\
                         [wavefunctions1[1], wavefunctions1[3],
                          wavefunctions2[0]]),
             'interaction_id': 7,
             'number': 2,
             'color_indices': [0, 0],
             'fermionfactor': 1})])
        amplitude2[0].set('interaction_id', 7, self.mymodel)

        diagram2 = helas_objects.HelasDiagram({'wavefunctions': wavefunctions2,
                                               'amplitudes': amplitude2,
                                               'number': 2})
        mydiagrams = helas_objects.HelasDiagramList([diagram1, diagram2])

        matrix_element = helas_objects.HelasMatrixElement(myamplitude, 1)

        self.assertEqual(matrix_element.get('diagrams'), mydiagrams)

    def test_generate_helas_diagrams_4g(self):
        """Testing the helas diagram generation g g > g g and g g > g g g
        """

        # Test g g > g g 

        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':21,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':21,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':21,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':21,
                                         'state':True}))

        myproc = base_objects.Process({'legs':myleglist,
                                       'model':self.mymodel})

        myamplitude = diagram_generation.Amplitude({'process': myproc})

        self.assertEqual(len(myamplitude.get('diagrams')), 4)

        matrix_element = helas_objects.HelasMatrixElement(myamplitude,
                                                          gen_color=False)

        self.assertEqual([len(diagram.get('amplitudes')) for diagram in \
                          matrix_element.get('diagrams')],
                         [3, 1, 1, 1])

        # Test g g > g g g

        myleglist.append(base_objects.Leg({'id':21,
                                         'state':True}))

        myproc = base_objects.Process({'legs':myleglist,
                                       'model':self.mymodel})

        myamplitude = diagram_generation.Amplitude({'process': myproc})

        self.assertEqual(len(myamplitude.get('diagrams')), 25)

        matrix_element = helas_objects.HelasMatrixElement(myamplitude,
                                                          gen_color=False)

        self.assertEqual([len(diagram.get('amplitudes')) for diagram in \
                          matrix_element.get('diagrams')],
                         [1, 1, 1, 3, 1, 1, 1, 3, 1, 1, 1, 3, 1, 1, 1, 3,
                          1, 1, 1, 3, 3, 3, 3, 3, 3])

        return

        # Test g g > g g g g

        myleglist.append(base_objects.Leg({'id':21,
                                         'state':True}))

        myproc = base_objects.Process({'legs':myleglist,
                                       'model':self.mymodel})

        myamplitude = diagram_generation.Amplitude({'process': myproc})

        self.assertEqual(len(myamplitude.get('diagrams')), 220)

        matrix_element = helas_objects.HelasMatrixElement(myamplitude,
                                                          gen_color=False)

        self.assertEqual(sum([len(diagram.get('amplitudes')) for diagram in \
                          matrix_element.get('diagrams')]), 510)

    def test_helas_forbidden_s_channel_uux_uuxng(self):
        """Test helas diagrams with forbidden s-channel particles.
        """

        goal_no_photon = [4, 18]
        photon_none = [{1:[0]},{2:[1],4:[1],13:[0],17:[0]}]
        goal_no_quark = [2, 6]
        quark_none = [{0:[0]},{0:[0,1],1:[0,1],3:[0],5:[0]}]

        for ngluons in range(2):

            myleglist = base_objects.LegList()

            myleglist.append(base_objects.Leg({'id':-2,
                                             'state':False}))
            myleglist.append(base_objects.Leg({'id':2,
                                             'state':False}))
            myleglist.append(base_objects.Leg({'id':-2,
                                             'state':True}))
            myleglist.append(base_objects.Leg({'id':2,
                                             'state':True}))
            myleglist.extend([base_objects.Leg({'id':21,
                                                 'state':True})] * ngluons)

            myproc = base_objects.Process({'legs':myleglist,
                                           'model':self.mymodel,
                                           'forbidden_s_channels':[22]})

            myamplitude = diagram_generation.Amplitude(myproc)

            helas_amplitude = helas_objects.HelasMatrixElement(myamplitude)
            
            self.assertEqual(len(helas_amplitude.get('diagrams')),
                             goal_no_photon[ngluons])

            #print myamplitude.nice_string()

            diagrams = helas_amplitude.get('diagrams')
            for idiag in range(len(diagrams)):
                if idiag in photon_none[ngluons]:
                    vertices, tchannels = \
                          diagrams[idiag].get('amplitudes')[0].get_s_and_t_channels(2)
                    for ivert in range(len(vertices)):
                        if ivert in photon_none[ngluons][idiag]:
                            self.assertEqual(False,
                                    vertices[ivert].get('legs')[-1].get('onshell'))
                        else:
                            self.assertEqual(None,
                                    vertices[ivert].get('legs')[-1].get('onshell'))

            # Test with u a > u a (+ g)

            myleglist = base_objects.LegList()

            myleglist.append(base_objects.Leg({'id':2,
                                             'state':False}))
            myleglist.append(base_objects.Leg({'id':22,
                                             'state':False}))
            myleglist.append(base_objects.Leg({'id':2,
                                             'state':True}))
            myleglist.append(base_objects.Leg({'id':22,
                                             'state':True}))
            myleglist.extend([base_objects.Leg({'id':21,
                                                 'state':True})] * ngluons)

            myproc = base_objects.Process({'legs':myleglist,
                                           'model':self.mymodel,
                                           'forbidden_s_channels':[2]})

            myamplitude = diagram_generation.Amplitude(myproc)

            helas_amplitude = helas_objects.HelasMatrixElement(myamplitude)
            
            self.assertEqual(len(helas_amplitude.get('diagrams')),
                             goal_no_quark[ngluons])

            #print helas_amplitude.nice_string()

            diagrams = helas_amplitude.get('diagrams')
            for idiag in range(len(diagrams)):
                if idiag in quark_none[ngluons]:
                    vertices, tchannels = \
                          diagrams[idiag].get('amplitudes')[0].get_s_and_t_channels(2)
                    for ivert in range(len(vertices)):
                        if ivert in quark_none[ngluons][idiag]:
                            self.assertEqual(False,
                                    vertices[ivert].get('legs')[-1].get('onshell'))
                        else:
                            self.assertEqual(None,
                                    vertices[ivert].get('legs')[-1].get('onshell'))
            
    def test_sorted_mothers(self):
        """Testing the sorted_mothers routine
        """

        # Set up model

        mypartlist = base_objects.ParticleList()
        myinterlist = base_objects.InteractionList()

        # A W
        mypartlist.append(base_objects.Particle({'name':'W+',
                      'antiname':'W-',
                      'spin':3,
                      'color':1,
                      'mass':'MW',
                      'width':'WW',
                      'texname':'W^+',
                      'antitexname':'W^-',
                      'line':'wavy',
                      'charge':1.,
                      'pdg_code':24,
                      'propagating':True,
                      'is_part':True,
                      'self_antipart':False}))
        Wplus = mypartlist[len(mypartlist) - 1]
        Wminus = copy.copy(Wplus)
        Wminus.set('is_part', False)

        # A photon
        mypartlist.append(base_objects.Particle({'name':'a',
                      'antiname':'a',
                      'spin':3,
                      'color':1,
                      'mass':'zero',
                      'width':'zero',
                      'texname':'\gamma',
                      'antitexname':'\gamma',
                      'line':'wavy',
                      'charge':0.,
                      'pdg_code':22,
                      'propagating':True,
                      'is_part':True,
                      'self_antipart':True}))
        a = mypartlist[len(mypartlist) - 1]

        # Z
        mypartlist.append(base_objects.Particle({'name':'Z',
                      'antiname':'Z',
                      'spin':3,
                      'color':1,
                      'mass':'MZ',
                      'width':'WZ',
                      'texname':'Z',
                      'antitexname':'Z',
                      'line':'wavy',
                      'charge':0.,
                      'pdg_code':23,
                      'propagating':True,
                      'is_part':True,
                      'self_antipart':True}))
        Z = mypartlist[len(mypartlist) - 1]


        # WWZ and WWa couplings

        myinterlist.append(base_objects.Interaction({
            'id': 3,
            'particles': base_objects.ParticleList(\
                                            [Wplus, \
                                             Wminus, \
                                             Wplus,
                                             Wminus]),
            'color': [],
            'lorentz':['WWVVN'],
            'couplings':{(0, 0):'MGVX6'},
            'orders':{'QED':2}}))

        myinterlist.append(base_objects.Interaction({
            'id': 4,
            'particles': base_objects.ParticleList(\
                                            [Wplus, \
                                             a, \
                                             Wminus,
                                             a]),
            'color': [],
            'lorentz':['WWVVN'],
            'couplings':{(0, 0):'MGVX4'},
            'orders':{'QED':2}}))

        myinterlist.append(base_objects.Interaction({
            'id': 5,
            'particles': base_objects.ParticleList(\
                                            [Wminus, \
                                             a, \
                                             Wplus,
                                             Z]),
            'color': [],
            'lorentz':['WWVVN'],
            'couplings':{(0, 0):'MGVX7'},
            'orders':{'QED':2}}))

        myinterlist.append(base_objects.Interaction({
            'id': 6,
            'particles': base_objects.ParticleList(\
                                            [Wminus, \
                                             Z, \
                                             Wplus,
                                             Z]),
            'color': [],
            'lorentz':['WWVVN'],
            'couplings':{(0, 0):'MGVX8'},
            'orders':{'QED':2}}))


        mybasemodel = base_objects.Model()
        mybasemodel.set('particles', mypartlist)
        mybasemodel.set('interactions', myinterlist)

        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':24,
                                           'state':False,
                                           'number': 1}))
        myleglist.append(base_objects.Leg({'id':23,
                                         'state':True,
                                           'number': 2}))
        myleglist.append(base_objects.Leg({'id':-24,
                                         'state':False,
                                           'number': 3}))
        myleglist.append(base_objects.Leg({'id':22,
                                         'state':True,
                                           'number': 5}))
        myleglist.append(base_objects.Leg({'id':22,
                                         'state':True,
                                           'number': 4}))

        mymothers = helas_objects.HelasWavefunctionList(\
            [helas_objects.HelasWavefunction(leg, 0, mybasemodel) for leg in myleglist[:4]])

        amplitude = helas_objects.HelasAmplitude()
        amplitude.set('interaction_id', 5, mybasemodel)
        amplitude.set('mothers', mymothers)
        self.assertEqual(helas_objects.HelasMatrixElement.sorted_mothers(amplitude),
                         [mymothers[2], mymothers[3], mymothers[0], mymothers[1]])
        mymothers = helas_objects.HelasWavefunctionList(\
            [helas_objects.HelasWavefunction(leg, 0, mybasemodel) for leg in myleglist[2:]])

        wavefunction = helas_objects.HelasWavefunction(myleglist[2],
                                                       4, mybasemodel)
        wavefunction.set('mothers', mymothers)
        self.assertEqual([m.get('pdg_code') for m in \
                          helas_objects.HelasMatrixElement.\
                          sorted_mothers(wavefunction)],
                         [mymothers[1].get('pdg_code'),
                          mymothers[0].get('pdg_code'),
                          mymothers[2].get('pdg_code')])

    def test_complicated_majorana_process(self):
        """Test majorana process z e- > n2 n2 e-
        """

        mypartlist = base_objects.ParticleList()
        myinterlist = base_objects.InteractionList()

        # A electron and positron
        mypartlist.append(base_objects.Particle({'name':'e-',
                      'antiname':'e+',
                      'spin':2,
                      'color':1,
                      'mass':'zero',
                      'width':'zero',
                      'texname':'e^-',
                      'antitexname':'e^+',
                      'line':'straight',
                      'charge':-1.,
                      'pdg_code':11,
                      'propagating':True,
                      'is_part':True,
                      'self_antipart':False}))
        eminus = mypartlist[len(mypartlist) - 1]
        eplus = copy.copy(eminus)
        eplus.set('is_part', False)

        # E sleptons and their antiparticle
        mypartlist.append(base_objects.Particle({'name':'el-',
                      'antiname':'el+',
                      'spin':1,
                      'color':1,
                      'mass':'Msl2',
                      'width':'Wsl2',
                      'texname':'\tilde e^-',
                      'antitexname':'\tilde e^+',
                      'line':'dashed',
                      'charge':1.,
                      'pdg_code':1000011,
                      'propagating':True,
                      'is_part':True,
                      'self_antipart':False}))
        elminus = mypartlist[len(mypartlist) - 1]
        elplus = copy.copy(elminus)
        elplus.set('is_part', False)

        mypartlist.append(base_objects.Particle({'name':'er-',
                      'antiname':'er+',
                      'spin':1,
                      'color':1,
                      'mass':'Msl2',
                      'width':'Wsl2',
                      'texname':'\tilde e^-',
                      'antitexname':'\tilde e^+',
                      'line':'dashed',
                      'charge':1.,
                      'pdg_code':2000011,
                      'propagating':True,
                      'is_part':True,
                      'self_antipart':False}))
        erminus = mypartlist[len(mypartlist) - 1]
        erplus = copy.copy(erminus)
        erplus.set('is_part', False)

        # Neutralinos
        mypartlist.append(base_objects.Particle({'name':'n2',
                      'antiname':'n2',
                      'spin':2,
                      'color':1,
                      'mass':'mn2',
                      'width':'wn2',
                      'texname':'\chi_0^2',
                      'antitexname':'\chi_0^2',
                      'line':'straight',
                      'charge':0.,
                      'pdg_code':1000023,
                      'propagating':True,
                      'is_part':True,
                      'self_antipart':True}))
        n2 = mypartlist[len(mypartlist) - 1]

        # A z
        mypartlist.append(base_objects.Particle({'name':'z',
                      'antiname':'z',
                      'spin':3,
                      'color':1,
                      'mass':'zmass',
                      'width':'zwidth',
                      'texname':'\gamma',
                      'antitexname':'\gamma',
                      'line':'wavy',
                      'charge':0.,
                      'pdg_code':23,
                      'propagating':True,
                      'is_part':True,
                      'self_antipart':True}))
        z = mypartlist[len(mypartlist) - 1]

        # Coupling of e to Z
        myinterlist.append(base_objects.Interaction({
                      'id': 1,
                      'particles': base_objects.ParticleList(\
                                            [eplus, \
                                             eminus, \
                                             z]),
                      'color': [],
                      'lorentz':[''],
                      'couplings':{(0, 0):'GZL'},
                      'orders':{'QED':1}}))

        # Coupling of n2 to e and el/er
        myinterlist.append(base_objects.Interaction({
                      'id': 2,
                      'particles': base_objects.ParticleList(\
                                            [eplus, \
                                             n2, \
                                             elminus]),
                      'color': [],
                      'lorentz':[''],
                      'couplings':{(0, 0):'GELN2M'},
                      'orders':{'QED':1}}))

        myinterlist.append(base_objects.Interaction({
                      'id': 3,
                      'particles': base_objects.ParticleList(\
                                            [n2, \
                                             eminus, \
                                             elplus]),
                      'color': [],
                      'lorentz':[''],
                      'couplings':{(0, 0):'GELN2P'},
                      'orders':{'QED':1}}))

        myinterlist.append(base_objects.Interaction({
                      'id': 4,
                      'particles': base_objects.ParticleList(\
                                            [eplus, \
                                             n2, \
                                             erminus]),
                      'color': [],
                      'lorentz':[''],
                      'couplings':{(0, 0):'GERN2M'},
                      'orders':{'QED':1}}))

        myinterlist.append(base_objects.Interaction({
                      'id': 5,
                      'particles': base_objects.ParticleList(\
                                            [n2, \
                                             eminus, \
                                             erplus]),
                      'color': [],
                      'lorentz':[''],
                      'couplings':{(0, 0):'GERN2P'},
                      'orders':{'QED':1}}))

        # Coupling of n2 to z
        myinterlist.append(base_objects.Interaction({
                      'id': 6,
                      'particles': base_objects.ParticleList(\
                                            [n2, \
                                             n2, \
                                             z]),
                      'color': [],
                      'lorentz':[''],
                      'couplings':{(0, 0):'GZN22'},
                      'orders':{'QED':1}}))

        # Coupling of el/er to z
        myinterlist.append(base_objects.Interaction({
                      'id': 7,
                      'particles': base_objects.ParticleList(\
                                            [z, \
                                             elminus, \
                                             elplus]),
                      'color': [],
                      'lorentz':[''],
                      'couplings':{(0, 0):'GZELEL'},
                      'orders':{'QED':1}}))

        myinterlist.append(base_objects.Interaction({
                      'id': 8,
                      'particles': base_objects.ParticleList(\
                                            [z, \
                                             erminus, \
                                             erplus]),
                      'color': [],
                      'lorentz':[''],
                      'couplings':{(0, 0):'GZERER'},
                      'orders':{'QED':1}}))


        mymodel = base_objects.Model()
        mymodel.set('particles', mypartlist)
        mymodel.set('interactions', myinterlist)

        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':23,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':11,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':1000023,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':1000023,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':11,
                                         'state':True}))

        myproc = base_objects.Process({'legs':myleglist,
                                           'model':mymodel})
        myamplitude = diagram_generation.Amplitude({'process': myproc})

        self.assertEqual(len(myamplitude.get('diagrams')), 24)

        me = helas_objects.HelasMatrixElement(myamplitude,
                                              gen_color=False)

        self.assertEqual(sum([len(diagram.get('amplitudes')) for diagram in \
                          me.get('diagrams')]), 24)

        for i, amp in enumerate(me.get_all_amplitudes()):
            self.assertEqual(amp.get('number'), i + 1)

        for i, wf in enumerate(me.get_all_wavefunctions()):
            self.assertEqual(wf.get('number'), i + 1)        

    def test_multi_amp_majorana_process(self):
        """Test fermion clash process x1+ x1+ > w- w- with multiple amps
        """

        mypartlist = base_objects.ParticleList()
        myinterlist = base_objects.InteractionList()

        # x1+ and x1-
        mypartlist.append(base_objects.Particle({'name':'x1+',
                      'antiname':'x1-',
                      'spin':2,
                      'color':1,
                      'mass':'Mch1',
                      'width':'Wch1',
                      'charge':1.,
                      'pdg_code':1000024,
                      'propagating':True,
                      'is_part':True,
                      'self_antipart':False}))
        x1plus = mypartlist[len(mypartlist) - 1]
        x1minus = copy.copy(x1plus)
        x1minus.set('is_part', False)

        # W+ and W-
        mypartlist.append(base_objects.Particle({'name':'w+',
                      'antiname':'w-',
                      'spin':3,
                      'color':1,
                      'mass':'MW',
                      'width':'WW',
                      'charge':1.,
                      'pdg_code':24,
                      'propagating':True,
                      'is_part':True,
                      'self_antipart':False}))
        wplus = mypartlist[len(mypartlist) - 1]
        wminus = copy.copy(wplus)
        wminus.set('is_part', False)

        # Neutralinos
        mypartlist.append(base_objects.Particle({'name':'n1',
                      'antiname':'n1',
                      'spin':2,
                      'color':1,
                      'mass':'Mneu1',
                      'width':'Wneu1',
                      'texname':'\chi_0^1',
                      'antitexname':'\chi_0^1',
                      'line':'straight',
                      'charge':0.,
                      'pdg_code':1000022,
                      'propagating':True,
                      'is_part':True,
                      'self_antipart':True}))
        n1 = mypartlist[len(mypartlist) - 1]

        # Coupling of n1 to w and x1
        myinterlist.append(base_objects.Interaction({
                      'id': 1,
                      'particles': base_objects.ParticleList(\
                                            [x1minus, \
                                             n1, \
                                             wplus]),
                      'color': [],
                      'lorentz':['FFV2', 'FFV3'],
                      'couplings':{(0, 0):'GC_666', (0, 1):'GC_416'},
                      'orders':{'QED':1}}))

        myinterlist.append(base_objects.Interaction({
                      'id': 2,
                      'particles': base_objects.ParticleList(\
                                            [n1, \
                                             x1plus, \
                                             wminus]),
                      'color': [],
                      'lorentz':['FFV2', 'FFV3'],
                      'couplings':{(0, 0):'GC_424', (0, 1):'GC_630'},
                      'orders':{'QED':1}}))


        mymodel = base_objects.Model()
        mymodel.set('particles', mypartlist)
        mymodel.set('interactions', myinterlist)

        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':1000024,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':1000024,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':24,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':24,
                                         'state':True}))

        myproc = base_objects.Process({'legs':myleglist,
                                           'model':mymodel})
        myamplitude = diagram_generation.Amplitude({'process': myproc})

        self.assertEqual(len(myamplitude.get('diagrams')), 2)

        me = helas_objects.HelasMatrixElement(myamplitude,
                                              gen_color=False)

        helas_writer = helas_call_writers.FortranUFOHelasCallWriter(mymodel)

        self.assertEqual(len(me.get_all_amplitudes()), 2)

        self.assertEqual(len(me.get_all_wavefunctions()), 6)

        for i, amp in enumerate(me.get_all_amplitudes()):
            self.assertEqual(amp.get('number'), i + 1)

        for i, wf in enumerate(me.get_all_wavefunctions()):
            self.assertEqual(wf.get('number'), i + 1)        


    def test_get_conjugate_index(self):
        """Test the get_conjugate_index routines"""

        myleg1 = base_objects.Leg({'id':2})
        myleg2 = base_objects.Leg({'id':2})
        myleg3 = base_objects.Leg({'id':-11})
        myleg4 = base_objects.Leg({'id':11})

        wf1 = helas_objects.HelasWavefunction(myleg1, 3, self.mymodel)
        wf2 = helas_objects.HelasWavefunction(myleg2, 0, self.mymodel)
        wf3 = helas_objects.HelasWavefunction(myleg3, 0, self.mymodel)
        wf4 = helas_objects.HelasWavefunction(myleg4, 0, self.mymodel)

        mothers = helas_objects.HelasWavefunctionList([wf2, wf3, wf4])

        wf1.set('mothers', mothers)
        wf1.set('pdg_codes', [-2,2,-11,11])
        
        self.assertEqual(wf1.get_spin_state_number(), 2)
        self.assertEqual(wf1.find_outgoing_number(), 1)
        self.assertEqual(wf1.get_conjugate_index(), ())

        wf1.set('fermionflow', -1)
        self.assertEqual(wf1.get_conjugate_index(), (1,))

        wf2.set('fermionflow', -1)
        self.assertEqual(wf1.get_conjugate_index(), (1,))

        wf1.set('fermionflow', 1)
        self.assertEqual(wf1.get_conjugate_index(), (1,))

        wf2.set('fermionflow', 1)
        wf3.set('fermionflow', -1)
        self.assertEqual(wf1.get_conjugate_index(), (2,))

        wf4.set('fermionflow', -1)
        self.assertEqual(wf1.get_conjugate_index(), (2,))

        wf3.set('fermionflow', 1)
        self.assertEqual(wf1.get_conjugate_index(), (2,))

        wf1.set('fermionflow', -1)
        self.assertEqual(wf1.get_conjugate_index(), (1, 2))

        myleg5 = base_objects.Leg({'id':2, 'state': False})
        wf5 = helas_objects.HelasWavefunction(myleg5, 0, self.mymodel)

        mothers.insert(0, wf5)
        wf4.set('fermionflow', 1)

        amp = helas_objects.HelasAmplitude()
        amp.set('mothers', mothers)

        self.assertEqual([w.is_fermion() for w in mothers], [True] * 4)
        self.assertEqual(amp.get_conjugate_index(), ())
        
        wf5.set('fermionflow', -1)
        self.assertEqual(amp.get_conjugate_index(), (1,))

        wf4.set('fermionflow', -1)
        self.assertEqual(amp.get_conjugate_index(), (1,2))

        wf5.set('fermionflow', 1)
        self.assertEqual(amp.get_conjugate_index(), (2,))

#===============================================================================
# HelasDecayChainProcessTest
#===============================================================================
class HelasDecayChainProcessTest(unittest.TestCase):
    """Test class for the HelasDecayChainProcess object"""

    mydict = {}
    mywavefunctions = None
    myamplitude = None
    mydiagrams = None
    mymatrixelement = None
    mymodel = base_objects.Model()


    def setUp(self):

        # Set up model

        mypartlist = base_objects.ParticleList()
        myinterlist = base_objects.InteractionList()

        # A gluon
        mypartlist.append(base_objects.Particle({'name':'g',
                      'antiname':'g',
                      'spin':3,
                      'color':8,
                      'mass':'zero',
                      'width':'zero',
                      'texname':'g',
                      'antitexname':'g',
                      'line':'curly',
                      'charge':0.,
                      'pdg_code':21,
                      'propagating':True,
                      'is_part':True,
                      'self_antipart':True}))

        g = mypartlist[len(mypartlist) - 1]

        # A quark U and its antiparticle
        mypartlist.append(base_objects.Particle({'name':'u',
                      'antiname':'u~',
                      'spin':2,
                      'color':3,
                      'mass':'zero',
                      'width':'zero',
                      'texname':'u',
                      'antitexname':'\bar u',
                      'line':'straight',
                      'charge':2. / 3.,
                      'pdg_code':2,
                      'propagating':True,
                      'is_part':True,
                      'self_antipart':False}))
        u = mypartlist[len(mypartlist) - 1]
        antiu = copy.copy(u)
        antiu.set('is_part', False)

        # A quark D and its antiparticle
        mypartlist.append(base_objects.Particle({'name':'d',
                      'antiname':'d~',
                      'spin':2,
                      'color':3,
                      'mass':'zero',
                      'width':'zero',
                      'texname':'d',
                      'antitexname':'\bar d',
                      'line':'straight',
                      'charge':-1. / 3.,
                      'pdg_code':1,
                      'propagating':True,
                      'is_part':True,
                      'self_antipart':False}))
        d = mypartlist[len(mypartlist) - 1]
        antid = copy.copy(d)
        antid.set('is_part', False)

        # Gluon couplings to quarks
        myinterlist.append(base_objects.Interaction({
                      'id': 3,
                      'particles': base_objects.ParticleList(\
                                            [u, \
                                             antiu, \
                                             g]),
                      'color': [color.ColorString([color.T(2, 0, 1)])],
                      'lorentz':[''],
                      'couplings':{(0, 0):'GG'},
                      'orders':{'QCD':1}}))

        myinterlist.append(base_objects.Interaction({
                      'id': 4,
                      'particles': base_objects.ParticleList(\
                                            [d, \
                                             antid, \
                                             g]),
                      'color': [color.ColorString([color.T(2, 0, 1)])],
                      'lorentz':[''],
                      'couplings':{(0, 0):'GG'},
                      'orders':{'QCD':1}}))

        # 3-Gluon coupling
        myinterlist.append(base_objects.Interaction({
                      'id': 5,
                      'particles': base_objects.ParticleList(\
                                            [g, \
                                             g, \
                                             g]),
                      'color': [color.ColorString([color.f(0, 1, 2)])],
                      'lorentz':[''],
                      'couplings':{(0, 0):'MGVX1'},
                      'orders':{'QCD':1}}))


        self.mymodel.set('particles', mypartlist)
        self.mymodel.set('interactions', myinterlist)


    def test_helas_decay_chain_process(self):
        """Test a HelasDecayChainProcess pp > jj, j > jj
        """

        p = [1, -1, 2, -2, 21]

        my_multi_leg = base_objects.MultiLeg({'ids': p, 'state': True});

        # Define the multiprocess
        my_multi_leglist = base_objects.MultiLegList([copy.copy(leg) for leg in [my_multi_leg] * 4])
        
        my_multi_leglist[0].set('state', False)
        my_multi_leglist[1].set('state', False)
        
        my_process_definition = base_objects.ProcessDefinition({\
                                     'legs':my_multi_leglist,
                                     'model':self.mymodel})
        my_decay_leglist = base_objects.MultiLegList([copy.copy(leg) \
                                          for leg in [my_multi_leg] * 4])
        my_decay_leglist[0].set('state', False)
        my_decay_processes = base_objects.ProcessDefinition({\
                               'legs':my_decay_leglist,
                               'model':self.mymodel})

        my_process_definition.set('decay_chains',
                                  base_objects.ProcessDefinitionList(\
                                    [my_decay_processes]))

        my_decay_chain_amps = diagram_generation.DecayChainAmplitude(\
                                                   my_process_definition)
        
        my_dc_process = helas_objects.HelasDecayChainProcess(\
                                       my_decay_chain_amps)

        self.assertEqual(len(my_dc_process.get('core_processes')), 33)
        self.assertEqual(len(my_dc_process.get('decay_chains')), 1)
        self.assertEqual(len(my_dc_process.get('decay_chains')[0].\
                             get('core_processes')), 15)

    def test_helas_forbidden_s_channel_decay_chain(self):
        """Test helas diagrams with forbidden s-channel particles for decay chain.
        """

        # Test with u g > u g g, u > u g

        goal_no_quark = 15
        quark_none = {0:[1,2],1:[1,2],2:[2],6:[1],8:[1],11:[1],13:[1],14:[1]}
        quark_true = {0:0,1:0,2:0,6:0,8:0,11:0,13:0,14:0}

        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':2,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':21,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':2,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':21,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':21,
                                         'state':True}))

        myproc = base_objects.Process({'legs':myleglist,
                                       'model':self.mymodel,
                                       'forbidden_s_channels':[2]})

        myleglist = base_objects.LegList()
        myleglist.append(base_objects.Leg({'id':2,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':21,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':2,
                                         'state':True}))
        mydecayproc = base_objects.Process({'legs':myleglist,
                                            'model':self.mymodel})
        myproc.set('decay_chains', base_objects.ProcessList([mydecayproc]))

        myamplitude = diagram_generation.DecayChainAmplitude(myproc)

        #print myamplitude.nice_string()

        helas_amplitude = helas_objects.HelasDecayChainProcess(myamplitude).\
                          combine_decay_chain_processes()[0]

        self.assertEqual(len(helas_amplitude.get('diagrams')),
                         goal_no_quark)

        diagrams = helas_amplitude.get('diagrams')
        for idiag in range(len(diagrams)):
            if idiag in quark_none:
                vertices, tchannels = \
                      diagrams[idiag].get('amplitudes')[0].get_s_and_t_channels(2)
                for ivert in range(len(vertices)):
                    if ivert in quark_none[idiag]:
                        # This is forbidden leg
                        self.assertEqual(False,
                                vertices[ivert].get('legs')[-1].get('onshell'))
                    elif ivert == quark_true[idiag]:
                        # This is the decay chain leg
                        self.assertEqual(True,
                                vertices[ivert].get('legs')[-1].get('onshell'))
                    else:
                        self.assertEqual(None,
                                vertices[ivert].get('legs')[-1].get('onshell'))
                        
        # Test with u g > u g , u > u g g

        goal_no_quark = 9
        quark_none = {0:[0],1:[0],3:[0],4:[0],6:[0],7:[0]}
        quark_true = dict(zip(range(goal_no_quark),[1]*goal_no_quark))

        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':2,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':21,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':2,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':21,
                                         'state':True}))

        myproc = base_objects.Process({'legs':myleglist,
                                       'model':self.mymodel})

        myleglist = base_objects.LegList()
        myleglist.append(base_objects.Leg({'id':2,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':2,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':21,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':21,
                                         'state':True}))
        mydecayproc = base_objects.Process({'legs':myleglist,
                                            'model':self.mymodel,
                                            'forbidden_s_channels':[2]})
        myproc.set('decay_chains', base_objects.ProcessList([mydecayproc]))

        myamplitude = diagram_generation.DecayChainAmplitude(myproc)

        helas_amplitude = helas_objects.HelasDecayChainProcess(myamplitude).\
                          combine_decay_chain_processes()[0]

        self.assertEqual(len(helas_amplitude.get('diagrams')),
                         goal_no_quark)

        diagrams = helas_amplitude.get('diagrams')
        for idiag in range(len(diagrams)):
            if idiag in quark_none:
                vertices, tchannels = \
                      diagrams[idiag].get('amplitudes')[0].get_s_and_t_channels(2)
                for ivert in range(len(vertices)):
                    if ivert in quark_none[idiag]:
                        # This is forbidden leg
                        self.assertEqual(False,
                                vertices[ivert].get('legs')[-1].get('onshell'))
                    elif ivert == quark_true[idiag]:
                        # This is the decay chain leg
                        self.assertEqual(True,
                                vertices[ivert].get('legs')[-1].get('onshell'))
                    else:
                        self.assertEqual(None,
                                vertices[ivert].get('legs')[-1].get('onshell'))
                        
            

#===============================================================================
# HelasMultiProcessTest
#===============================================================================
class HelasMultiProcessTest(unittest.TestCase):
    """Test class for the HelasMultiProcess object"""

    mydict = {}
    mywavefunctions = None
    myamplitude = None
    mydiagrams = None
    mymatrixelement = None
    mymodel = base_objects.Model()


    def setUp(self):

        # Set up model

        mypartlist = base_objects.ParticleList()
        myinterlist = base_objects.InteractionList()

        # A gluon
        mypartlist.append(base_objects.Particle({'name':'g',
                      'antiname':'g',
                      'spin':3,
                      'color':8,
                      'mass':'zero',
                      'width':'zero',
                      'texname':'g',
                      'antitexname':'g',
                      'line':'curly',
                      'charge':0.,
                      'pdg_code':21,
                      'propagating':True,
                      'is_part':True,
                      'self_antipart':True}))

        g = mypartlist[len(mypartlist) - 1]

        # A quark U and its antiparticle
        mypartlist.append(base_objects.Particle({'name':'u',
                      'antiname':'u~',
                      'spin':2,
                      'color':3,
                      'mass':'zero',
                      'width':'zero',
                      'texname':'u',
                      'antitexname':'\bar u',
                      'line':'straight',
                      'charge':2. / 3.,
                      'pdg_code':2,
                      'propagating':True,
                      'is_part':True,
                      'self_antipart':False}))
        u = mypartlist[len(mypartlist) - 1]
        antiu = copy.copy(u)
        antiu.set('is_part', False)

        # A quark D and its antiparticle
        mypartlist.append(base_objects.Particle({'name':'d',
                      'antiname':'d~',
                      'spin':2,
                      'color':3,
                      'mass':'zero',
                      'width':'zero',
                      'texname':'d',
                      'antitexname':'\bar d',
                      'line':'straight',
                      'charge':-1. / 3.,
                      'pdg_code':1,
                      'propagating':True,
                      'is_part':True,
                      'self_antipart':False}))
        d = mypartlist[len(mypartlist) - 1]
        antid = copy.copy(d)
        antid.set('is_part', False)

        # Gluon couplings to quarks
        myinterlist.append(base_objects.Interaction({
                      'id': 3,
                      'particles': base_objects.ParticleList(\
                                            [u, \
                                             antiu, \
                                             g]),
                      'color': [color.ColorString([color.T(2, 0, 1)])],
                      'lorentz':[''],
                      'couplings':{(0, 0):'GG'},
                      'orders':{'QCD':1}}))

        myinterlist.append(base_objects.Interaction({
                      'id': 4,
                      'particles': base_objects.ParticleList(\
                                            [d, \
                                             antid, \
                                             g]),
                      'color': [color.ColorString([color.T(2, 0, 1)])],
                      'lorentz':[''],
                      'couplings':{(0, 0):'GG'},
                      'orders':{'QCD':1}}))

        # 3-Gluon coupling
        myinterlist.append(base_objects.Interaction({
                      'id': 5,
                      'particles': base_objects.ParticleList(\
                                            [g, \
                                             g, \
                                             g]),
                      'color': [color.ColorString([color.f(0, 1, 2)])],
                      'lorentz':[''],
                      'couplings':{(0, 0):'GG'},
                      'orders':{'QCD':1}}))

        self.mymodel.set('particles', mypartlist)
        self.mymodel.set('interactions', myinterlist)


    def test_helas_multi_process(self):
        """Test the HelasMultiProcess with the processes uu~>uu~
        and dd~>dd~"""

        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':1,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':-1,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':1,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':-1,
                                         'state':True}))

        myproc1 = base_objects.Process({'legs':myleglist,
                                       'model':self.mymodel})

        myamplitude1 = diagram_generation.Amplitude({'process': myproc1})

        myamplitude1.get('diagrams')

        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':2,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':-2,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':2,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':-2,
                                         'state':True}))

        myproc2 = base_objects.Process({'legs':myleglist,
                                       'model':self.mymodel})

        myamplitude2 = diagram_generation.Amplitude({'process': myproc2})

        myamplitude2.get('diagrams')

        myamplitudes = diagram_generation.AmplitudeList([ myamplitude1,
                                                          myamplitude2 ])
        # myamplitudes is emptied by the HelasMultiProcess
        myamplcopy = copy.copy(myamplitudes)

        my_matrix_element1 = helas_objects.HelasMatrixElement(myamplitude1)
        my_multiprocess = helas_objects.HelasMultiProcess(myamplitudes)

        self.assertEqual(len(my_multiprocess.get('matrix_elements')), 1)
        self.assertEqual(my_multiprocess.get('matrix_elements')[0].\
                         get('processes'),
                         base_objects.ProcessList([ myproc1, myproc2 ]))
        self.assertEqual(my_multiprocess.get('matrix_elements')[0].\
                         get('diagrams'),
                         my_matrix_element1.get('diagrams'))

        myamplcopy[0].get('process').set('id', 10)

        my_multiprocess = helas_objects.HelasMultiProcess(myamplcopy)
        self.assertEqual(len(my_multiprocess.get('matrix_elements')), 2)


    def test_helas_multiprocess_pp_nj(self):
        """Setting up and testing pp > nj based on multiparticle lists,
        using the amplitude functionality of MultiProcess
        (which makes partial use of crossing symmetries)
        """

        max_fs = 2 #3

        p = [21, 1, -1, -2, 2]

        my_multi_leg = base_objects.MultiLeg({'ids': p, 'state': True});

        goal_number_matrix_elements = [18, 26]

        for nfs in range(2, max_fs + 1):

            # Define the multiprocess
            my_multi_leglist = base_objects.MultiLegList([copy.copy(leg) for \
                                            leg in [my_multi_leg] * (2 + nfs)])

            my_multi_leglist[0].set('state', False)
            my_multi_leglist[1].set('state', False)

            my_process_definition = base_objects.ProcessDefinition({\
                            'legs':my_multi_leglist,
                            'model':self.mymodel})
            my_multiprocess = diagram_generation.MultiProcess(\
                {'process_definitions':\
                 base_objects.ProcessDefinitionList([my_process_definition])})

            helas_multi_proc = helas_objects.HelasMultiProcess(my_multiprocess)

            if nfs <= 3:
                self.assertEqual(len(helas_multi_proc.get('matrix_elements')),
                                     goal_number_matrix_elements[nfs - 2])


    def test_complete_decay_chain_process(self):
        """Test a complete decay chain process gp>jg,j>jjj,j>jjj
        """

        p = [1, -1, 2, -2, 21]

        my_multi_leg = base_objects.MultiLeg({'ids': p, 'state': True});
        my_gluon_leg = base_objects.MultiLeg({'ids': [21], 'state': True});

        # Define the multiprocess
        my_multi_leglist = base_objects.MultiLegList([copy.copy(my_gluon_leg),
                                                      copy.copy(my_multi_leg),
                                                      copy.copy(my_multi_leg),
                                                      copy.copy(my_gluon_leg)])
                                                      
        
        my_multi_leglist[0].set('state', False)
        my_multi_leglist[1].set('state', False)
        
        my_process_definition = base_objects.ProcessDefinition({\
                                     'legs':my_multi_leglist,
                                     'model':self.mymodel})
        #my_multi_leg = base_objects.MultiLeg({'ids': [1, -1, 21],
        #                                              'state': True});
        my_decay_leglist = base_objects.MultiLegList([copy.copy(leg) \
                                          for leg in [my_multi_leg] * 3])
        my_decay_leglist[0].set('state', False)
        my_decay_leglist2 = base_objects.MultiLegList([copy.copy(leg) \
                                          for leg in [my_multi_leg] * 3] + \
                                                     [copy.copy(my_gluon_leg)])
        my_decay_leglist2[0].set('state', False)
        my_decay_processes = base_objects.ProcessDefinitionList(\
            [base_objects.ProcessDefinition({\
                               'legs':my_decay_leglist,
                               'model':self.mymodel}),
             base_objects.ProcessDefinition({\
                               'legs':my_decay_leglist2,
                               'model':self.mymodel})])

        my_process_definition.set('decay_chains',
                                  my_decay_processes)

        my_decay_chain_amps = diagram_generation.DecayChainAmplitude(\
                                                   my_process_definition)
        
        my_dc_process = helas_objects.HelasDecayChainProcess(\
                                       my_decay_chain_amps)

        matrix_elements = my_dc_process.combine_decay_chain_processes()

        self.assertEqual(len(matrix_elements), 8)

        num_processes = [4, 2, 4, 2, 4, 2, 2, 1]
        num_amps = [9, 9, 9, 9, 9, 9, 9, 9]
        num_wfs = [19, 19, 19, 19, 19, 19, 19, 19]
        iden_factors = [1, 6, 1, 6, 1, 6, 2, 12]

        for i, me in enumerate(matrix_elements):
            self.assertEqual(len(me.get('processes')), num_processes[i])
            if num_amps[i] > 0:
                self.assertEqual(me.get_number_of_amplitudes(),
                                 num_amps[i])
            if num_wfs[i] > 0:
                self.assertEqual(me.get_number_of_wavefunctions(),
                                 num_wfs[i])

            if iden_factors[i] > 0:
                self.assertEqual(me.get('identical_particle_factor'),
                                 iden_factors[i])

            for i, amp in enumerate(sorted(me.get_all_amplitudes(),
                                       lambda a1,a2: \
                                       a1.get('number') - a2.get('number'))):
                self.assertEqual(amp.get('number'), i + 1)
                  
            for i, wf in enumerate(sorted(me.get_all_wavefunctions(),
                                       lambda a1,a2: \
                                       a1.get('number') - a2.get('number'))):
                self.assertEqual(wf.get('number'), i + 1)

            for i, wf in enumerate(filter (lambda wf: not wf.get('mothers'),
                                           me.get_all_wavefunctions())):
                self.assertEqual(wf.get('number_external'), i + 1)

    def test_decay_chain_process_overall_orders(self):
        """Test a complete decay chain process pp>jj,j>jj with QED=2, QCD=2
        """

        mypartlist = self.mymodel.get('particles')
        myinterlist = self.mymodel.get('interactions')

        # A photon
        mypartlist.append(base_objects.Particle({'name':'a',
                      'antiname':'a',
                      'spin':3,
                      'color':0,
                      'mass':'zero',
                      'width':'zero',
                      'texname':'a',
                      'antitexname':'a',
                      'line':'wavy',
                      'charge':0.,
                      'pdg_code':22,
                      'propagating':True,
                      'is_part':True,
                      'self_antipart':True}))

        a = mypartlist[len(mypartlist) - 1]
        u = self.mymodel.get('particle_dict')[2]
        antiu = self.mymodel.get('particle_dict')[-2]
        d = self.mymodel.get('particle_dict')[1]
        antid = self.mymodel.get('particle_dict')[-1]

        # Photon couplings to quarks
        myinterlist.append(base_objects.Interaction({
                      'id': 6,
                      'particles': base_objects.ParticleList(\
                                            [u, \
                                             antiu, \
                                             a]),
                      'color': [color.ColorString([color.T(0, 1)])],
                      'lorentz':[''],
                      'couplings':{(0, 0):'UUA'},
                      'orders':{'QED':1}}))

        myinterlist.append(base_objects.Interaction({
                      'id': 7,
                      'particles': base_objects.ParticleList(\
                                            [d, \
                                             antid, \
                                             a]),
                      'color': [color.ColorString([color.T(0, 1)])],
                      'lorentz':[''],
                      'couplings':{(0, 0):'DDA'},
                      'orders':{'QED':1}}))

        self.mymodel.set('particles', mypartlist)
        self.mymodel.set('interactions', myinterlist)

        p = [1, -1, 2, -2, 21]

        my_multi_leg = base_objects.MultiLeg({'ids': p, 'state': True});

        # Define the multiprocess
        my_multi_leglist = base_objects.MultiLegList([copy.copy(my_multi_leg),
                                                      copy.copy(my_multi_leg),
                                                      copy.copy(my_multi_leg),
                                                      copy.copy(my_multi_leg)])
                                                      
        
        my_multi_leglist[0].set('state', False)
        my_multi_leglist[1].set('state', False)
        
        my_process_definition = base_objects.ProcessDefinition({\
                                     'legs':my_multi_leglist,
                                     'model':self.mymodel,
                                     'overall_orders':{'QED': 2, 'QCD': 2}})
        #my_multi_leg = base_objects.MultiLeg({'ids': [1, -1, 21],
        #                                              'state': True});
        my_decay_leglist = base_objects.MultiLegList([copy.copy(leg) \
                                          for leg in [my_multi_leg] * 3])
        my_decay_leglist[0].set('state', False)
        my_decay_processes = base_objects.ProcessDefinitionList(\
            [base_objects.ProcessDefinition({\
                               'legs':my_decay_leglist,
                               'model':self.mymodel})])

        my_process_definition.set('decay_chains',
                                  my_decay_processes)

        my_decay_chain_amps = diagram_generation.DecayChainAmplitude(\
                                                   my_process_definition)
        
        my_dc_process = helas_objects.HelasDecayChainProcess(\
                                       my_decay_chain_amps)

        matrix_elements = my_dc_process.combine_decay_chain_processes()

        self.assertEqual(len(matrix_elements), 20)

        num_processes = [1] * 20

        for i, me in enumerate(matrix_elements):
            self.assertEqual(len(me.get('processes')), num_processes[i])
            for i, amp in enumerate(sorted(me.get_all_amplitudes(),
                                       lambda a1,a2: \
                                       a1.get('number') - a2.get('number'))):
                self.assertEqual(amp.get('number'), i + 1)
                  
            for i, wf in enumerate(sorted(me.get_all_wavefunctions(),
                                       lambda a1,a2: \
                                       a1.get('number') - a2.get('number'))):
                self.assertEqual(wf.get('number'), i + 1)

            for i, wf in enumerate(filter (lambda wf: not wf.get('mothers'),
                                           me.get_all_wavefunctions())):
                self.assertEqual(wf.get('number_external'), i + 1)

    def test_multistage_decay_chain_process(self):
        """Test a multistage decay g g > d d~, d > g d, d~ > g d~, g > u u~ g
        """

        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':21,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':21,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':1,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':-1,
                                         'state':True}))

        mycoreproc = base_objects.Process({'legs':myleglist,
                                       'model':self.mymodel})

        amp_core = diagram_generation.Amplitude(mycoreproc)

        me_core =  helas_objects.HelasMatrixElement(\
            amp_core)

        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':1,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':21,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':1,
                                         'state':True}))

        mydecay11 = base_objects.Process({'legs':myleglist,
                                       'model':self.mymodel})

        me11 =  helas_objects.HelasMatrixElement(\
            diagram_generation.Amplitude(mydecay11))

        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':-1,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':21,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':-1,
                                         'state':True}))

        mydecay12 = base_objects.Process({'legs':myleglist,
                                       'model':self.mymodel})

        me12 =  helas_objects.HelasMatrixElement(\
            diagram_generation.Amplitude(mydecay12))

        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':21,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':2,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':-2,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':21,
                                         'state':True}))

        mydecay2 = base_objects.Process({'legs':myleglist,
                                       'model':self.mymodel})

        me2 =  helas_objects.HelasMatrixElement(\
            diagram_generation.Amplitude(mydecay2))

        mydecay11.set('decay_chains', base_objects.ProcessList([mydecay2]))
        mydecay12.set('decay_chains', base_objects.ProcessList([mydecay2]))

        mycoreproc.set('decay_chains', base_objects.ProcessList([\
            mydecay11, mydecay12]))

        myamplitude = diagram_generation.DecayChainAmplitude(mycoreproc)

        matrix_element = helas_objects.HelasDecayChainProcess(myamplitude)

        matrix_elements = matrix_element.combine_decay_chain_processes()

        #print matrix_elements[0].get('processes')[0].nice_string()
        #print matrix_elements[0].get('identical_particle_factor')

        #for diag in matrix_elements[0].get('diagrams'):
            #print 'Diagram ',diag.get('number')
            #print "Wavefunctions: ", len(diag.get('wavefunctions'))
            #for wf in diag.get('wavefunctions'):
            #    print wf.get('number'), wf.get('number_external'), wf.get('pdg_code'), [mother.get('number') for mother in wf.get('mothers')], wf.get('onshell')
            #print "Amplitudes: ", len(diag.get('amplitudes'))
            #for amp in diag.get('amplitudes'):
            #    print amp.get('number'), [mother.get('number') for mother in amp.get('mothers')]

        self.assertEqual(matrix_elements[0].get_number_of_amplitudes(),
                         me_core.get_number_of_amplitudes() * \
                         me11.get_number_of_amplitudes() * \
                         me12.get_number_of_amplitudes() * \
                         me2.get_number_of_amplitudes() ** 2)

        self.assertEqual(matrix_elements[0].get('identical_particle_factor'),
                         1)

        for i, amp in enumerate(sum([diag.get('amplitudes') for diag in \
                                    matrix_elements[0].get('diagrams')],[])):
            self.assertEqual(amp.get('number'), i + 1)

        for i, wf in enumerate(sum([diag.get('wavefunctions') for diag in \
                                   matrix_elements[0].get('diagrams')],[])):
            self.assertEqual(wf.get('number'), i + 1)

        for i, wf in enumerate(filter (lambda wf: not wf.get('mothers'),
                                       matrix_elements[0].get_all_wavefunctions())):
            self.assertEqual(wf.get('number_external'), i + 1)

        # Test the setting of wavefunctions as "onshell" if they
        # correspond to a decaying particle
        for i, wf in enumerate(matrix_elements[0].get_all_wavefunctions()):
            if i in [6, 8, 13, 15, 18, 19, 21, 22, 24, 25, 27, 28]:
                self.assert_(wf.get('onshell'))
            else:
                self.assert_(not wf.get('onshell'))

        # Test Process.get_legs_with_decays
        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':21,
                                           'state':False,
                                           'number': 1}))
        myleglist.append(base_objects.Leg({'id':21,
                                           'state':False,
                                           'number': 2}))
        myleglist.append(base_objects.Leg({'id':2,
                                           'state':True,
                                           'number': 3}))
        myleglist.append(base_objects.Leg({'id':-2,
                                           'state':True,
                                           'number': 4}))
        myleglist.append(base_objects.Leg({'id':21,
                                           'state':True,
                                           'number': 5}))
        myleglist.append(base_objects.Leg({'id':1,
                                           'state':True,
                                           'number': 6}))
        myleglist.append(base_objects.Leg({'id':2,
                                           'state':True,
                                           'number': 7}))
        myleglist.append(base_objects.Leg({'id':-2,
                                           'state':True,
                                           'number': 8}))
        myleglist.append(base_objects.Leg({'id':21,
                                           'state':True,
                                           'number': 9}))
        myleglist.append(base_objects.Leg({'id':-1,
                                           'state':True,
                                           'number': 10}))
        self.assertEqual(myleglist, matrix_elements[0].get('processes')[0].\
                         get_legs_with_decays())

    def test_majorana_decay_chain_process(self):
        """Test decay chain with majorana particles e+e->n1n1
        """

        mypartlist = base_objects.ParticleList()
        myinterlist = base_objects.InteractionList()

        # A electron and positron
        mypartlist.append(base_objects.Particle({'name':'e-',
                      'antiname':'e+',
                      'spin':2,
                      'color':1,
                      'mass':'zero',
                      'width':'zero',
                      'texname':'e^-',
                      'antitexname':'e^+',
                      'line':'straight',
                      'charge':-1.,
                      'pdg_code':11,
                      'propagating':True,
                      'is_part':True,
                      'self_antipart':False}))
        eminus = mypartlist[len(mypartlist) - 1]
        eplus = copy.copy(eminus)
        eplus.set('is_part', False)

        # A E slepton and its antiparticle
        mypartlist.append(base_objects.Particle({'name':'sl2-',
                      'antiname':'sl2+',
                      'spin':1,
                      'color':1,
                      'mass':'Msl2',
                      'width':'Wsl2',
                      'texname':'\tilde e^-',
                      'antitexname':'\tilde e^+',
                      'line':'dashed',
                      'charge':1.,
                      'pdg_code':1000011,
                      'propagating':True,
                      'is_part':True,
                      'self_antipart':False}))
        seminus = mypartlist[len(mypartlist) - 1]
        seplus = copy.copy(seminus)
        seplus.set('is_part', False)

        # A neutralino
        mypartlist.append(base_objects.Particle({'name':'n1',
                      'antiname':'n1',
                      'spin':2,
                      'color':1,
                      'mass':'Mneu1',
                      'width':'Wneu1',
                      'texname':'\chi_0^1',
                      'antitexname':'\chi_0^1',
                      'line':'straight',
                      'charge':0.,
                      'pdg_code':1000022,
                      'propagating':True,
                      'is_part':True,
                      'self_antipart':True}))
        n1 = mypartlist[len(mypartlist) - 1]

        # A photon
        mypartlist.append(base_objects.Particle({'name':'a',
                      'antiname':'a',
                      'spin':3,
                      'color':1,
                      'mass':'zero',
                      'width':'zero',
                      'texname':'\gamma',
                      'antitexname':'\gamma',
                      'line':'wavy',
                      'charge':0.,
                      'pdg_code':22,
                      'propagating':True,
                      'is_part':True,
                      'self_antipart':True}))
        a = mypartlist[len(mypartlist) - 1]

        # Coupling of n1 to e and se
        myinterlist.append(base_objects.Interaction({
                      'id': 103,
                      'particles': base_objects.ParticleList(\
                                            [n1, \
                                             eminus, \
                                             seplus]),
                      'color': [],
                      'lorentz':[''],
                      'couplings':{(0, 0):'MGVX350'},
                      'orders':{'QED':1}}))

        myinterlist.append(base_objects.Interaction({
                      'id': 104,
                      'particles': base_objects.ParticleList(\
                                            [eplus, \
                                             n1, \
                                             seminus]),
                      'color': [],
                      'lorentz':[''],
                      'couplings':{(0, 0):'MGVX494'},
                      'orders':{'QED':1}}))

        # Coupling of e to gamma
        myinterlist.append(base_objects.Interaction({
                      'id': 7,
                      'particles': base_objects.ParticleList(\
                                            [eminus, \
                                             eplus, \
                                             a]),
                      'color': [],
                      'lorentz':[''],
                      'couplings':{(0, 0):'MGVX12'},
                      'orders':{'QED':1}}))

        # Coupling of sl2 to gamma
        myinterlist.append(base_objects.Interaction({
                      'id': 8,
                      'particles': base_objects.ParticleList(\
                                            [a, \
                                             seplus, \
                                             seminus]),
                      'color': [],
                      'lorentz':[''],
                      'couplings':{(0, 0):'MGVX56'},
                      'orders':{'QED':1}}))

        mymodel = base_objects.Model()
        mymodel.set('particles', mypartlist)
        mymodel.set('interactions', myinterlist)

        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':11,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':-11,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':1000022,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':1000022,
                                         'state':True}))

        mycoreproc = base_objects.Process({'legs':myleglist,
                                       'model':mymodel})

        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':1000022,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':11,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':-1000011,
                                         'state':True}))

        mydecay1 = base_objects.Process({'legs':myleglist,
                                         'model':mymodel})

        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':1000022,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':-11,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':1000011,
                                         'state':True}))

        mydecay2 = base_objects.Process({'legs':myleglist,
                                         'model':mymodel})

        mycoreproc.set('decay_chains', base_objects.ProcessList([\
            mydecay1]))

        myamplitude = diagram_generation.DecayChainAmplitude(mycoreproc)

        matrix_element = helas_objects.HelasDecayChainProcess(myamplitude)

        matrix_elements = matrix_element.combine_decay_chain_processes()

        self.assertEqual(matrix_elements[0].get('identical_particle_factor'),
                         2)

        for i, diag in enumerate(matrix_elements[0].get('diagrams')):
            self.assertEqual(diag.get('number'), i + 1)

        for i, amp in enumerate(sum([diag.get('amplitudes') for diag in \
                                    matrix_elements[0].get('diagrams')],[])):
            self.assertEqual(amp.get('number'), i + 1)

        for i, wf in enumerate(sum([diag.get('wavefunctions') for diag in \
                                   matrix_elements[0].get('diagrams')],[])):
            self.assertEqual(wf.get('number'), i + 1)

        for i, wf in enumerate(filter (lambda wf: not wf.get('mothers'),
                                       matrix_elements[0].get('diagrams')[0].\
                                       get('wavefunctions'))):
            self.assertEqual(wf.get('number_external'), i + 1)

        for wf in filter (lambda wf: not wf.get('mothers'),
                                       sum([d.get('wavefunctions') for d in \
                                            matrix_elements[0].get('diagrams')\
                                            [1:]], [])):
            old_wf = filter(lambda w: w.get('number_external') == \
                            wf.get('number_external') and not w.get('mothers'),\
                            matrix_elements[0].get('diagrams')[0].\
                            get('wavefunctions'))[0]
            self.assertEqual(wf.get('particle'), old_wf.get('particle'))
            self.assert_(wf.get_with_flow('state') != old_wf.get_with_flow('state'))

        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':1000022,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':11,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':-1000011,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':22,
                                         'state':True}))

        mydecay3 = base_objects.Process({'legs':myleglist,
                                         'model':mymodel,
                                         'is_decay_chain': True})

        me3 =  helas_objects.HelasMatrixElement(\
            diagram_generation.Amplitude(mydecay3), gen_color = False)
        
        #print me3.get('processes')[0].nice_string()
        #print me3.get_base_amplitude().get('diagrams').nice_string()

        mycoreproc.set('decay_chains', base_objects.ProcessList([\
            mydecay3]))

        myamplitude = diagram_generation.DecayChainAmplitude(mycoreproc)

        matrix_element = helas_objects.HelasDecayChainProcess(myamplitude)

        matrix_elements = matrix_element.combine_decay_chain_processes()

        #for d in matrix_elements[0].get('diagrams'):
        #    print "Diagram number ", d.get('number')
        #    print "Wavefunctions:"
        #    for w in d.get('wavefunctions'):
        #        print w.get('number'),w.get('number_external'),w.get('pdg_code'),\
        #              [wf.get('number') for wf in w.get('mothers')]
        #    print "Amplitudes:"
        #    for a in d.get('amplitudes'):
        #        print a.get('number'),\
        #              [wf.get('number') for wf in a.get('mothers')]

        for i, diag in enumerate(matrix_elements[0].get('diagrams')):
            self.assertEqual(diag.get('number'), i + 1)

        for i, amp in enumerate(sum([diag.get('amplitudes') for diag in \
                                    matrix_elements[0].get('diagrams')],[])):
            self.assertEqual(amp.get('number'), i + 1)

        for i, wf in enumerate(sum([diag.get('wavefunctions') for diag in \
                                   matrix_elements[0].get('diagrams')],[])):
            self.assertEqual(wf.get('number'), i + 1)

        for i, wf in enumerate(filter (lambda wf: not wf.get('mothers'),
                                       matrix_elements[0].get('diagrams')[0].\
                                       get('wavefunctions'))):
            self.assertEqual(wf.get('number_external'), i + 1)

        for wf in filter (lambda wf: not wf.get('mothers'),
                                       sum([d.get('wavefunctions') for d in \
                                            matrix_elements[0].get('diagrams')\
                                            [1:]], [])):
            old_wf = filter(lambda w: w.get('number_external') == \
                            wf.get('number_external') and not w.get('mothers'),\
                            matrix_elements[0].get('diagrams')[0].\
                            get('wavefunctions'))[0]
            self.assertEqual(wf.get('particle'), old_wf.get('particle'))
            self.assert_(wf.get_with_flow('state') != old_wf.get_with_flow('state'))
        

    def test_equal_decay_chains(self):
        """Test the functions for checking equal decay chains
        """

        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':1,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':1,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':1,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':21,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':-1,
                                         'state':True}))

        myproc1 = base_objects.Process({'legs':myleglist,
                                        'model':self.mymodel,
                                        'is_decay_chain': True})

        myamplitude1 = diagram_generation.Amplitude()
        myamplitude1.set('process', myproc1)
        myamplitude1.generate_diagrams()

        mymatrixelement1 = helas_objects.HelasMatrixElement(\
            myamplitude1, gen_color = False)

        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':1,
                                         'state':False}))
        myleglist.append(base_objects.Leg({'id':21,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':1,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':-1,
                                         'state':True}))
        myleglist.append(base_objects.Leg({'id':1,
                                         'state':True}))

        myproc2 = base_objects.Process({'legs':myleglist,
                                        'model':self.mymodel,
                                        'is_decay_chain': True})

        myamplitude2 = diagram_generation.Amplitude()
        myamplitude2.set('process', myproc2)
        myamplitude2.generate_diagrams()

        mymatrixelement2 = helas_objects.HelasMatrixElement(\
            myamplitude2, gen_color = False)

        self.assert_(helas_objects.HelasMatrixElement.\
                     check_equal_decay_processes(\
                       mymatrixelement1, mymatrixelement2))

#===============================================================================
# TestIdentifyMETag
#===============================================================================
class TestIdentifyMETag(unittest.TestCase):
    """Test class for the DiagramTag class"""


    def setUp(self):
        self.base_model = import_ufo.import_model('sm')
    
    def test_identify_me_tag_qq_qqg(self):
        """Test the find_symmetry function"""

        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':2,
                                           'state':False}))
        myleglist.append(base_objects.Leg({'id':2,
                                           'state':False}))
        myleglist.append(base_objects.Leg({'id':2,
                                           'state':True}))
        myleglist.append(base_objects.Leg({'id':2,
                                           'state':True}))
        myleglist.append(base_objects.Leg({'id':21,
                                           'state':True}))

        myproc = base_objects.Process({'legs':myleglist,
                                       'model':self.base_model,
                                       'orders': {'QED': 0}})

        myamplitude1 = diagram_generation.Amplitude(myproc)


        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':1,
                                           'state':False,
                                           'number': 1}))
        myleglist.append(base_objects.Leg({'id':1,
                                           'state':True,
                                           'number': 3}))
        myleglist.append(base_objects.Leg({'id':1,
                                           'state':True,
                                           'number': 4}))
        myleglist.append(base_objects.Leg({'id':1,
                                           'state':False,
                                           'number': 2}))
        myleglist.append(base_objects.Leg({'id':21,
                                           'state':True,
                                           'number': 5}))

        myproc = base_objects.Process({'legs':myleglist,
                                       'model':self.base_model,
                                       'orders': {'QED': 0}})

        myamplitude2 = diagram_generation.Amplitude(myproc)

        tags1 = sorted([helas_objects.IdentifyMETag(d, self.base_model) \
                        for d in myamplitude1.get('diagrams')])
        tags2 = sorted([helas_objects.IdentifyMETag(d, self.base_model) \
                        for d in myamplitude2.get('diagrams')])

        self.assertEqual(tags1, tags2)

    def test_non_identify_me_tag_qq_qqg(self):
        """Test the find_symmetry function"""

        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':2,
                                           'state':False}))
        myleglist.append(base_objects.Leg({'id':2,
                                           'state':False}))
        myleglist.append(base_objects.Leg({'id':2,
                                           'state':True}))
        myleglist.append(base_objects.Leg({'id':2,
                                           'state':True}))
        myleglist.append(base_objects.Leg({'id':21,
                                           'state':True}))

        myproc = base_objects.Process({'legs':myleglist,
                                       'model':self.base_model})

        myamplitude1 = diagram_generation.Amplitude(myproc)

        myleglist = base_objects.LegList()

        myleglist.append(base_objects.Leg({'id':1,
                                           'state':False}))
        myleglist.append(base_objects.Leg({'id':1,
                                           'state':False}))
        myleglist.append(base_objects.Leg({'id':1,
                                           'state':True}))
        myleglist.append(base_objects.Leg({'id':1,
                                           'state':True}))
        myleglist.append(base_objects.Leg({'id':21,
                                           'state':True}))

        myproc = base_objects.Process({'legs':myleglist,
                                       'model':self.base_model})

        myamplitude2 = diagram_generation.Amplitude(myproc)

        tags1 = sorted([helas_objects.IdentifyMETag(d, self.base_model) \
                        for d in myamplitude1.get('diagrams')])

        tags2 = sorted([helas_objects.IdentifyMETag(d, self.base_model) \
                        for d in myamplitude2.get('diagrams')])

        self.assertFalse(tags1 == tags2)
