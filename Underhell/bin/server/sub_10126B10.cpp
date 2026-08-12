void __thiscall sub_10126B10(int this, int a2, int a3)
{
  int *v4; // ecx

  if ( a2 )
  {
    sub_100C0E40((unsigned int *)(this + 800), a2);
    if ( *(_DWORD *)(this + 804) != a3 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v4 = *(int **)(this + 24);
        if ( v4 )
          sub_100194B0(v4, 804);
      }
      *(_DWORD *)(this + 804) = a3;
    }
    sub_100EACE0((unsigned __int16 *)this, a2, 1);
  }
}
