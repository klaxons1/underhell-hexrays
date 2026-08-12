void __thiscall sub_100EA200(int this, float *a2)
{
  double v2; // st6
  double v3; // st7
  float v4[3]; // [esp+0h] [ebp-Ch] BYREF

  if ( *a2 != flt_106F1CA8 || a2[1] != flt_106F1CAC || a2[2] != flt_106F1CB0 )
  {
    if ( *(_BYTE *)(this + 306) == 6 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD, float *))(**(_DWORD **)(this + 424) + 208))(
        *(_DWORD *)(this + 424),
        0,
        a2);
    }
    else
    {
      v2 = a2[2];
      v3 = *a2;
      v4[0] = a2[1] + *(float *)(this + 488);
      v4[1] = v2 + *(float *)(this + 492);
      v4[2] = v3 + *(float *)(this + 496);
      sub_100D7260((float *)this, v4);
    }
  }
}
