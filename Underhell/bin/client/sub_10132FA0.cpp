_DWORD *__thiscall sub_10132FA0(_DWORD *this, int a2, int a3, int a4, float a5)
{
  int v5; // ebx
  int v6; // edx
  double v8; // st7
  double v9; // st6
  __int16 v10; // fps
  bool v11; // c0
  char v12; // c2
  bool v13; // c3
  unsigned __int16 v14; // cx
  int v15; // edi
  _DWORD *result; // eax
  double v17; // st5
  __int16 v18; // fps
  double v19; // st4
  bool v20; // c0
  char v21; // c2
  bool v22; // c3
  int v23; // eax
  char Buffer[32]; // [esp+8h] [ebp-28h] BYREF
  int v25; // [esp+28h] [ebp-8h]
  int v26; // [esp+2Ch] [ebp-4h]
  int v27; // [esp+38h] [ebp+8h]

  v5 = a3;
  v6 = 0;
  v26 = 0;
  if ( a3 > 0 )
  {
    v8 = a5;
    v9 = 300.0;
    v27 = a2 + a3 - 1;
    do
    {
      v11 = v8 > 0.0;
      v12 = 0;
      v13 = 0.0 == v8;
      v14 = HIWORD(this[9 * (((unsigned __int16)this[14412] - (_WORD)v6) & 0x3FF) + 5198]);
      v15 = this[9 * (((unsigned __int16)this[14412] - (_WORD)v6) & 0x3FF) + 5199];
      result = &this[9 * (((unsigned __int16)this[14412] - (_WORD)v6) & 0x3FF)];
      v25 = v14;
      LOWORD(result) = v10;
      if ( 0.0 != v8 )
      {
        if ( v9 <= v8 )
          v17 = v8;
        else
          v17 = v9;
        v19 = (double)v25;
        v20 = v19 < v17;
        v21 = 0;
        v22 = v19 == v17;
        LOWORD(result) = v18;
        if ( v19 > v17 )
        {
          sub_10228370(Buffer, 0x20u, "%i", v14);
          v23 = (*(int (__cdecl **)(int, _DWORD, char *))(*(_DWORD *)dword_1047CA64 + 548))(
                  dword_1047CA64,
                  this[14429],
                  Buffer);
          result = (_DWORD *)(*(int (__cdecl **)(int, _DWORD, int, int, int, int, int, int, char *))(*(_DWORD *)dword_1047CA64 + 536))(
                               dword_1047CA64,
                               this[14429],
                               v27 - v23 / 2,
                               v15 - 11 < 0 ? 0 : v15 - 11,
                               255,
                               255,
                               255,
                               255,
                               Buffer);
          v8 = a5;
          v6 = v26;
          v9 = 300.0;
          v5 = a3;
        }
      }
      --v27;
      v26 = ++v6;
    }
    while ( v6 < v5 );
  }
  return result;
}
