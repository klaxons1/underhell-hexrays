int __thiscall sub_1013BEE0(int this, float a2, float a3, float a4)
{
  int result; // eax
  double v5; // st7
  float **v6; // edx
  float *v7; // edx

  if ( !*(_DWORD *)(this + 1212) )
    return Warning("CViewAngleAnimation::RunAnimation called on an empty view animation\n");
  v5 = *((float *)off_103DC81C + 3);
  *(_BYTE *)(this + 1196) = 0;
  *(float *)(this + 1192) = v5;
  *(float *)(this + 1220) = a2;
  *(float *)(this + 1224) = a3;
  *(float *)(this + 1228) = a4;
  v6 = *(float ***)(this + 1200);
  result = *((_DWORD *)*v6 + 4);
  *(_DWORD *)(this + 1232) = result;
  if ( (result & 1) == 0 )
  {
    v7 = *v6;
    *v7 = a2;
    v7[1] = a3;
    v7[2] = a4;
  }
  return result;
}
