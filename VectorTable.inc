;vector table for interrupts
;---------------------------------------------
    BEGIN_VECTORS:	    ;reset
      jmp main
      
    INT0addr:		    ;external interrupt request 0
    nop
    nop
    INT1addr:		    ;external interrupt request 1
    nop 
    nop
    PC0addr:		    ;pin change interrupt request 0
    nop 
    nop
    PC1addr:		    ;pin change interrupt request 1
    nop
    nop
    PC2addr:		    ;pin change interrupt request 2
    nop
    nop
    WDTaddr:		    ;watchdog time-out interrupt
    nop
    nop
    OC2Aaddr:		    ;Timer/Counter 2 compare match A
    nop
    nop
    OC2Baddr:		    ;Timer/Counter 2 compare match B
    nop
    nop
    OVF2addr:		    ;Timer/Counter 2 overflow
    nop
    nop
    ICP1addr:		    ;Timer/Counter1 capture event
    nop
    nop
    OC1Aaddr:		    ;Timer/Counter1 Compare match A
    nop
    nop
    OC1Baddr:		    ;Timer/Counter1 Compare match B
    nop
    nop
    OVF1addr:		    ;Timer/Counter 1 overflow
    nop
    nop
    OC0Aaddr:		    ;TimerCounter0 Compare Match A
    jmp DisplayMux_isr
    OC0Baddr:		    ;TimerCounter0 Compare Match B
    nop
    nop
    OVF0addr:		    ;Timer/Counter0 overflow
    nop
    nop
    SPIaddr:		    ;SPI Serial Transfer Complete
    nop
    nop
    URXCaddr:		    ;USART Rx Complete
    nop
    nop
    UDREaddr:		    ;USART, Data Register Empty
    nop
    nop
    UTXCaddr:		    ;USART, Tx Complete
    nop
    nop
    ADCCaddr:		    ;ADC Conversion Complete
    nop
    nop
    ERDYaddr:		    ;EEPROM Ready
    nop
    nop
    ACIaddr:		    ;Analog Comparator
    nop
    nop
    TWIaddr:		    ;Two-wire serial interface
    nop
    nop
    SPMRaddr:		    ;Store program memory read
    nop
    nop
    END_VECTORS:


