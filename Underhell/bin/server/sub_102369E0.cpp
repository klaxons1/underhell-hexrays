double __stdcall sub_102369E0(int a1)
{
  float v1; // eax
  float *v2; // esi
  float v4; // [esp+Ch] [ebp+8h]

  v1 = *(float *)(a1 + 2292);
  v2 = (float *)(a1 + 2292);
  v4 = v1 - 526.5;
  if ( LODWORD(v1) != LODWORD(v4) )
  {
    (**((void (__thiscall ***)(int, float *))v2 - 25))((int)(v2 - 25), v2);
    *v2 = v4;
  }
  return *v2 * 100.0 * 0.0025252525;
}
