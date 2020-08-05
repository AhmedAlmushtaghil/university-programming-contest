# Problem A: Color Luminance  

RGB is one of the widespread methods used to represent our colorful world in digital systems. In RGB, every color is a combination of three components: Red, Green, and Blue. Every component is an integer in a scale of 0 to 255 inclusive. This offers a beautiful spectrum of 16 million different colors. The luminance of any of these colors is calculated as:  

$$Luminance(R, G, B) = \frac{max(R, G, B) + min(R, G, B)}{2}$$

Clearly, the calculated luminance is a value in [0, 255]. Your task is to compute, for any given RGB color, the luminance as a percentage - i.e. in the scale of [0, 100].  

#### Input format  

The input consists of 3 integers R, G, and B, where 0 $\leq$ R, G, B $\leq$ 255.

#### Output format

Output the calculated luminance as an integer L, where 0 $\leq$ L $\leq$ 100. If the calculated value is a fraction, output the integer part only (without rounding).