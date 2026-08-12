void __thiscall sub_101230F0(int this)
{
  char *v2; // edi
  float v3; // [esp+0h] [ebp-28h]
  float v4[3]; // [esp+10h] [ebp-18h] BYREF
  float v5[3]; // [esp+1Ch] [ebp-Ch] BYREF

  if ( *(_DWORD *)(this + 212) )
  {
    v2 = sub_100D8070((_DWORD *)this);
    if ( v2 )
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      if ( (*((_DWORD *)v2 + 63) & 0x800) != 0 )
        sub_100DAE60((int)v2);
      v5[0] = *((float *)v2 + 145) - *(float *)(this + 580);
      v5[1] = *((float *)v2 + 146) - *(float *)(this + 584);
      v5[2] = *((float *)v2 + 147) - *(float *)(this + 588);
      sub_10422540(v5, v4);
      sub_100E0EA0(this, v4);
    }
    v3 = *(float *)(dword_106B31C8 + 12) + 0.1;
    sub_100EC4A0((int *)this, v3, 0);
  }
}
