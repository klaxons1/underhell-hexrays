void __thiscall sub_100EA150(int this, float *a2)
{
  float v3[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( *a2 != flt_106F1CA8 || a2[1] != flt_106F1CAC || a2[2] != flt_106F1CB0 )
  {
    if ( *(_BYTE *)(this + 306) == 6 )
    {
      (*(void (__thiscall **)(_DWORD, float *, _DWORD))(**(_DWORD **)(this + 424) + 208))(
        *(_DWORD *)(this + 424),
        a2,
        0);
    }
    else
    {
      if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
        sub_100DAFD0(this);
      v3[0] = *(float *)(this + 476) + *a2;
      v3[1] = *(float *)(this + 480) + a2[1];
      v3[2] = *(float *)(this + 484) + a2[2];
      sub_100DD660(this, v3);
    }
  }
}
