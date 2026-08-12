void __thiscall sub_1011D100(_DWORD **this, int a2)
{
  float *v3; // ecx
  float v4; // [esp+0h] [ebp-8h]

  if ( sub_1011CD30(this - 1) )
  {
    (*(void (__thiscall **)(_DWORD *))(*this[3] + 676))(this[3]);
    if ( *((float *)this[3] + 454) >= 1.0 )
    {
      v3 = (float *)this[3];
      v4 = v3[454] - 1.0;
      sub_10025680(v3, v4);
    }
  }
}
