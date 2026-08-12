int __thiscall sub_10278310(_DWORD *this)
{
  int result; // eax
  int v3; // ebx
  int v4; // ebp
  int i; // edi
  int v6; // ebp
  int v7; // edi
  bool v8; // cc
  int v9; // [esp+3Ch] [ebp-10h] BYREF
  _BYTE v10[4]; // [esp+40h] [ebp-Ch] BYREF
  _BYTE v11[4]; // [esp+44h] [ebp-8h] BYREF
  _BYTE v12[4]; // [esp+48h] [ebp-4h] BYREF

  nullsub_4();
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, this[65]);
  result = this[56];
  if ( result > 0 )
  {
    v3 = 0;
    v4 = *(_DWORD *)(this[53] + 20 * result - 8) + 1;
    for ( i = 0; i < this[63]; ++i )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD, int, _BYTE *, _BYTE *, _BYTE *, int *))(*this + 800))(
        this,
        0,
        i,
        v12,
        v11,
        v10,
        &v9);
      v3 = v9;
      (*(void (__thiscall **)(int, _DWORD, int, int, int))(*(_DWORD *)dword_1047CA6C + 60))(
        dword_1047CA6C,
        0,
        v9,
        v4,
        v9);
    }
    v6 = 0;
    v7 = 0;
    if ( (int)this[56] > 0 )
    {
      v9 = 0;
      do
      {
        (*(void (__thiscall **)(int, int, _DWORD, int, int))(*(_DWORD *)dword_1047CA6C + 60))(
          dword_1047CA6C,
          v7,
          0,
          v7,
          v3);
        v7 += *(_DWORD *)(v9 + this[53] + 4);
        v8 = ++v6 < this[56];
        v9 += 20;
      }
      while ( v8 );
    }
    return (*(int (__thiscall **)(int, int, _DWORD, int, int))(*(_DWORD *)dword_1047CA6C + 60))(
             dword_1047CA6C,
             v7,
             0,
             v7,
             v3);
  }
  return result;
}
