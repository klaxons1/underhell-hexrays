int __thiscall sub_10299490(_DWORD *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v9; // [esp+Ch] [ebp-8h]
  int v10; // [esp+10h] [ebp-4h]

  if ( sub_1042A310(32) )
  {
    v2 = sub_1042A330("ActBusyAnimDatafile");
    v9 = v2;
  }
  else
  {
    v9 = 0;
    v2 = 0;
  }
  if ( dword_106B31D8 )
    v3 = dword_106B31D8 + 4;
  else
    v3 = 0;
  if ( (unsigned __int8)sub_1042A380(v3, "scripts/actbusy.txt", 0) )
  {
    v10 = sub_1042A2F0(v2);
    if ( v10 )
    {
      do
      {
        v4 = this[6];
        v5 = this[4];
        if ( v4 + 1 > v5 )
          sub_10061230(this + 3, v4 - v5 + 1);
        ++this[6];
        v6 = this[3];
        v7 = this[6] - v4 - 1;
        this[7] = v6;
        if ( v7 > 0 )
          memcpy((void *)(v6 + 56 * v4 + 56), (const void *)(v6 + 56 * v4), 56 * v7);
        if ( !sub_10295210(56 * v4 + this[3], v10) )
        {
          if ( this[6] - v4 - 1 > 0 )
            memcpy((void *)(this[3] + 56 * v4), (const void *)(this[3] + 56 * v4 + 56), 56 * (this[6] - v4 - 1));
          --this[6];
        }
        v10 = sub_1042A300(v10);
      }
      while ( v10 );
      v2 = v9;
    }
  }
  return sub_1042B1A0(v2);
}
