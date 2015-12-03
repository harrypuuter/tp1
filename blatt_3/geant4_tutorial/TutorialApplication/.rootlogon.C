{
    printf("\n");
    printf("    *=======================================*\n");
    printf("    *                                       *\n");
    printf("    *             Ready to Rock?            *\n");
    printf("    *                                       *\n");
    printf("    *=======================================*\n");
    printf("\n");
    
    
    // Load a reasonable style (standard style is stored under GloStyle)
    gInterpreter->LoadMacro(".rootstyle.C");
    rootstyle();
}
