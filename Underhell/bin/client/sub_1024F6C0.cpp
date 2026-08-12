char __thiscall sub_1024F6C0(int (__thiscall ****this)(_DWORD), int a2, int *a3, int *a4)
{
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v9; // [esp+20h] [ebp-10h] BYREF
  int v10; // [esp+24h] [ebp-Ch] BYREF
  int v11; // [esp+28h] [ebp-8h] BYREF
  int v12; // [esp+2Ch] [ebp-4h] BYREF

  v5 = (**this[51])(this[51]);
  if ( a2 != v5 )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 60))(dword_1047CA70, a2)
      || !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 92))(dword_1047CA70, a2)
      || ((*(void (__thiscall **)(int, int, int *, int *))(*(_DWORD *)dword_1047CA70 + 40))(
            dword_1047CA70,
            a2,
            &v12,
            &v11),
          (*(void (__thiscall **)(int, int, int *, int *))(*(_DWORD *)dword_1047CA70 + 20))(
            dword_1047CA70,
            a2,
            &v10,
            &v9),
          LOBYTE(v5) = sub_1024CF10((int)this, v12, v11, v10, v9, a3, a4),
          !(_BYTE)v5) )
    {
      v6 = 0;
      v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 68))(dword_1047CA70, a2);
      if ( v5 > 0 )
      {
        do
        {
          v7 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA70 + 72))(dword_1047CA70, a2, v6);
          sub_1024F6C0(v7, a3, a4);
          ++v6;
          v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 68))(dword_1047CA70, a2);
        }
        while ( v6 < v5 );
      }
    }
  }
  return v5;
}
