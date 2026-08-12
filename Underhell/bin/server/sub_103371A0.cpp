char __thiscall sub_103371A0(char *this)
{
  int v1; // eax
  bool v3; // bl
  float *v4; // edi

  LOBYTE(v1) = dword_106B31C8;
  if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
  {
    LOBYTE(v1) = sub_10023D10(this, 79);
    if ( !(_BYTE)v1 )
    {
      v3 = sub_10023D10(this, 67);
      sub_10394EB0(this);
      v1 = sub_10261B20();
      v4 = (float *)v1;
      if ( !v3 )
      {
        LOBYTE(v1) = sub_10023D10(this, 67);
        if ( (_BYTE)v1 )
        {
          LOBYTE(v1) = (*(int (__thiscall **)(float *, char *))(*(_DWORD *)v4 + 876))(v4, this);
          if ( (_BYTE)v1 )
          {
            LOBYTE(v1) = sub_103364E0(this);
            if ( (_BYTE)v1 )
            {
              LOBYTE(v1) = sub_10336540((int)this, v4, 1);
              if ( (_BYTE)v1 )
              {
                sub_10023E00(this, 67);
                LOBYTE(v1) = (unsigned __int8)sub_10023CB0(this, 79);
              }
            }
          }
        }
      }
    }
  }
  return v1;
}
