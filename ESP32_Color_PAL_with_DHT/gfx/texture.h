const int textureOffsets[] = {0, 131072, 196608, };
const short texturePointOffsets[] = {0, 0, 1, };
const unsigned short textureRes[][2] = {{256, 512}, {256, 256}, };
const signed short texturePoints[][2] = {{127, 127}, };
const unsigned short texturePixels[] = {
Sprites texture(2, texturePixels, textureOffsets, textureRes, texturePoints, texturePointOffsets);