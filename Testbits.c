void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    
    out[0] = 1;
    out[1] = 0;
    out[2] = 1;
    out[3] = 1;
            
    //value = (out[0]<<7) | (out[1]<<6) | (out[2]<<5) | out[7];
    value = (out[0]);
    test = 0;
    value = (out[1]);
    test = 1;
    value = (out[2]);
    value = (out[3]<<3)|(out[2]<<2)|(out[1]<<1)|(out[0]);
    test = 2;
    test = 3;
    
    while (1)
    {
        // Add your application code
    }
}
/**
 End of File
*/