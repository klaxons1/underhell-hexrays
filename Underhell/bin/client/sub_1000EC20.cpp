void __thiscall sub_1000EC20(int this, float *a2)
{
  float v3[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( *a2 != flt_10459240 || a2[1] != flt_10459244 || a2[2] != flt_10459248 )
  {
    if ( *(_BYTE *)(this + 316) == 6 )
    {
      (*(void (__thiscall **)(_DWORD, float *, _DWORD))(**(_DWORD **)(this + 184) + 208))(
        *(_DWORD *)(this + 184),
        a2,
        0);
    }
    else
    {
      sub_10038150(this);
      v3[0] = *(float *)(this + 244) + *a2;
      v3[1] = *(float *)(this + 248) + a2[1];
      v3[2] = *(float *)(this + 252) + a2[2];
      sub_100399E0(v3);
    }
  }
}
