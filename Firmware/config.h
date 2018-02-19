#ifndef _CONFIG_H
#define _CONFIG_H

#if 0
//ADC configuration
#define ADC_CHAN_MSK      0b0000001001011111 //used AD channels bit mask (0,1,2,3,4,6,9)
#define ADC_CHAN_CNT      7         //number of used channels)
#define ADC_OVRSAMPL      16        //oversampling multiplier
#define ADC_CALLBACK      adc_ready //callback function ()
#endif

#define ADC_CHAN_MSK      0b0110000000000000 //used AD channels bit mask (13,14)
#define ADC_CHAN_CNT      2         //number of used channels)
#define ADC_OVRSAMPL      16        //oversampling multiplier
#define ADC_CALLBACK      adc_ready //callback function ()

#endif //_CONFIG_H
