#ifndef __EXAMPLE__
#define __EXAMPLE__

/**
 * @brief fricking macro mate
 * 
 */
#define MY_MACRO 123


/**
 * @brief enum for an example
 * 
 */
typedef enum {
    e_a = 0,
    e_b,
}abc;

/**
 * @brief this is an example class
 * 
 */
class ex{
    public:
        ex();
        ~ex();
        float pubMethod(int a, char b);
    private:
        /**
         * @brief private variable
         * 
         */
        int privattr;
        abc privMethod(void);
};

#endif