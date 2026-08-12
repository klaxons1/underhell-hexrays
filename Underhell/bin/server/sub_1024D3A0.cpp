int __thiscall sub_1024D3A0(int this)
{
  long double v2; // st7
  float v3; // edx
  int v4; // ecx
  float v6; // [esp+Ch] [ebp-Ch] BYREF
  float v7; // [esp+10h] [ebp-8h]
  int v8; // [esp+14h] [ebp-4h]

  if ( (dword_106C7198 & 1) == 0 )
  {
    dword_106C7198 |= 1u;
    sub_1042C8D0("traceline_spin", "1", 0);
    atexit(sub_104745E0);
  }
  if ( *(_DWORD *)(dword_106C716C + 48) )
  {
    v2 = sin(*(float *)(dword_106B31C8 + 12));
    v3 = *(float *)(this + 732);
    v6 = *(float *)(this + 728);
    v4 = *(_DWORD *)(this + 736);
    v7 = v3;
    v8 = v4;
    v6 = (v2 * (v2 * v2) + 1.0 + 1.0) * 90.0;
    v7 = *(float *)(dword_106B31C8 + 12) * 10.0;
    sub_100E11A0(this, &v6);
  }
  return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
}
