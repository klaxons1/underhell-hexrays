void __thiscall sub_101B6420(float *this)
{
  double v1; // st7
  double v2; // st6
  double v4; // st5

  v1 = 0.5;
  v2 = 0.75;
  if ( *(_DWORD *)(dword_1043CA1C + 48) )
  {
    v2 = 1.5;
    v1 = 1.5;
  }
  v4 = *((float *)off_103DC81C + 3) - this[11];
  if ( v4 <= v1 )
  {
    if ( *((_BYTE *)this + 420) )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
      sub_10248C80("OpenWeaponSelectionMenu");
      *((_BYTE *)this + 420) = 0;
    }
  }
  else if ( *((_BYTE *)this + 420) )
  {
    if ( v4 > v1 + v2 )
      (*(void (__thiscall **)(float *))(*(_DWORD *)this + 64))(this);
  }
  else
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
    sub_10248C80("FadeOutWeaponSelectionMenu");
    *((_BYTE *)this + 420) = 1;
  }
}
