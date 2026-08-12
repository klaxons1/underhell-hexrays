void __thiscall sub_10256DE0(_BYTE *this)
{
  int v2; // esi
  int v3; // [esp+8h] [ebp-20h] BYREF
  int v4; // [esp+Ch] [ebp-1Ch] BYREF
  int v5; // [esp+10h] [ebp-18h] BYREF
  int v6[3]; // [esp+14h] [ebp-14h] BYREF
  int v7; // [esp+20h] [ebp-8h]
  int v8; // [esp+24h] [ebp-4h]

  if ( !this[293] )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int *, int *))(*(_DWORD *)this + 1000))(this, &v4, &v3) )
    {
      v2 = v4;
      memset(v6, 0, sizeof(v6));
      v7 = 0;
      v8 = 0;
      if ( v4 < v3 )
      {
        do
        {
          if ( *(_WORD *)(2 * v2 + *((_DWORD *)this + 55)) == 10 )
          {
            v5 = 13;
            sub_10255420(v6, v7, &v5);
          }
          sub_10255420(v6, v7, (_WORD *)(2 * v2++ + *((_DWORD *)this + 55)));
        }
        while ( v2 < v3 );
      }
      v5 = 0;
      sub_10255420(v6, v7, &v5);
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA80 + 32))(dword_1047CA80, v6[0], v3 - v4);
      sub_1011A810(v6);
    }
    (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 48))(this, 0);
    if ( this[340] )
      (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 996))(this);
  }
}
