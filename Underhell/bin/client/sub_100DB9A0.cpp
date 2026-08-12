void __thiscall sub_100DB9A0(_DWORD **this, int a2)
{
  int v3; // esi
  long double v4; // st7
  long double v5; // st7
  float v6; // [esp+0h] [ebp-14h]
  float v7; // [esp+10h] [ebp-4h]

  if ( this[1] )
  {
    v3 = sub_101422C0();
    v7 = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 36))(a2) + 8) - *(float *)(v3 + 8);
    off_103EDFEC();
    v4 = fabs(v7);
    if ( v4 >= 0.25 )
    {
      v5 = (v4 - 0.25) * 1.35;
      if ( v5 >= 1.0 )
        v5 = 1.0;
    }
    else
    {
      v5 = 0.0;
    }
    v6 = v5;
    (*(void (__stdcall **)(_DWORD))(*this[1] + 12))(LODWORD(v6));
  }
}
