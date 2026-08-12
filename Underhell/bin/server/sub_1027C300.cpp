void __thiscall sub_1027C300(int this, char a2)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // eax
  int savedregs; // [esp+Ch] [ebp+0h] BYREF

  *(_BYTE *)(this + 1410) = a2;
  v3 = *(_DWORD *)(this + 1412);
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (v3 & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( v4[1] == v5 )
    {
      if ( *v4 )
        goto LABEL_18;
    }
  }
  if ( !a2 )
  {
    *(_BYTE *)(this + 1409) = 1;
    sub_1027C0C0((_DWORD *)this, (int)&savedregs);
    v6 = sub_100D1940((_DWORD *)this);
    if ( v6 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 320))(v6);
  }
  v7 = *(_DWORD *)(this + 1412);
  if ( v7 != -1 )
  {
    v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 1412) & 0xFFF) + 1];
    v5 = v7 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 1412) & 0xFFF) + 2] == v5 )
    {
      if ( *v4 )
      {
LABEL_18:
        if ( a2 || !*(_BYTE *)(this + 1411) )
        {
          if ( v4[1] == v5 )
            sub_10403E50(*v4);
          else
            sub_10403E50(0);
        }
        else
        {
          v8 = sub_1026A890((unsigned int *)(this + 1412));
          sub_10403E30(v8);
        }
      }
    }
  }
}
