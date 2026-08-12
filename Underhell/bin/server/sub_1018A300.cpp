double __stdcall sub_1018A300(int a1)
{
  float v2; // ecx
  float *v3; // esi
  float v4; // [esp+8h] [ebp+8h]

  if ( (int)*(float *)(dword_106B2E5C + 44) != 1 )
    return 10.0;
  v2 = *(float *)(a1 + 2292);
  v3 = (float *)(a1 + 2292);
  v4 = v2 - 526.5;
  if ( LODWORD(v2) != LODWORD(v4) )
  {
    (**((void (__thiscall ***)(int, float *))v3 - 25))((int)(v3 - 25), v3);
    *v3 = v4;
  }
  return *v3 * 100.0 * 0.0025252525;
}
