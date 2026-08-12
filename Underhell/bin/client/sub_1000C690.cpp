void __thiscall sub_1000C690(int this)
{
  int v2; // eax
  bool v3; // zf
  int v4; // eax

  if ( *(_BYTE *)(this + 1985) )
  {
    if ( *((float *)off_103DC81C + 3) >= (double)*(float *)(this + 1972) )
    {
      *(_BYTE *)(this + 1985) = 0;
      if ( sub_1000BAC0((_DWORD *)this) )
      {
        v2 = sub_1000BAC0((_DWORD *)this);
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 504))(v2) )
        {
          v3 = *(_BYTE *)(this + 1965) == 0;
          if ( *(_BYTE *)(this + 1965) )
          {
            v4 = sub_10029CA0("Silencer");
            sub_10029C40(v4, 0);
            v3 = *(_BYTE *)(this + 1965) == 0;
          }
          *(_BYTE *)(this + 1965) = v3;
        }
      }
    }
  }
}
