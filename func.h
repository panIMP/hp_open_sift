#ifndef FUNC_H
#define FUNC_H

/*----------------------------------------------------------
redefinition of the build-in types
----------------------------------------------------------*/
#ifndef UInt8
#define UInt8 unsigned char
#endif // UInt8

#ifndef UInt32
#define UInt32 unsigned int
#endif // UInt32

#ifndef Int8
#define Int8 char
#endif

#ifndef Int32
#define Int32 int
#endif


/*----------------------------------------------------------
Basic image processing functions
----------------------------------------------------------*/

/*----------------------------------------------------------
Description:    Do Guassin blur over the image by adding X-axis blur and Y-axis blur
                X-axis -- [x0 - 3sigma, x0 + 3sigma]
                Y-axis -- [y0 - 3sigma, y0 + 3sigma]
Input:          imageData -- gray value of an image
                sigma     -- blur factor
Output:         imageData -- blurred image
return:         NULL
----------------------------------------------------------*/
void GuassinBlur(UInt8* imageData, UInt32 width, UInt32 height, float sigma);


#endif // FUNC_H
