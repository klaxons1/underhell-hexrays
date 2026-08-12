int __thiscall sub_100BBA30(_DWORD *this)
{
  int v2; // eax
  _BYTE v4[4]; // [esp+4h] [ebp-34h] BYREF
  _BYTE v5[4]; // [esp+8h] [ebp-30h] BYREF
  _BYTE v6[4]; // [esp+Ch] [ebp-2Ch] BYREF
  _BYTE v7[4]; // [esp+10h] [ebp-28h] BYREF
  _BYTE v8[4]; // [esp+14h] [ebp-24h] BYREF
  int v9; // [esp+18h] [ebp-20h] BYREF
  int v10; // [esp+1Ch] [ebp-1Ch] BYREF
  int v11; // [esp+20h] [ebp-18h] BYREF
  int v12; // [esp+24h] [ebp-14h] BYREF
  int v13; // [esp+28h] [ebp-10h]
  int v14; // [esp+2Ch] [ebp-Ch] BYREF
  int v15; // [esp+30h] [ebp-8h] BYREF
  int v16; // [esp+34h] [ebp-4h] BYREF

  v2 = this[67];
  this[73] = 0;
  if ( v2 )
  {
    this[68] = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 268))(
                 dword_1047CA6C,
                 *(_DWORD *)(v2 + 420))
             + 2;
    sub_10236250(&v12, v7, &v14, v8);
    sub_10236250(v4, v5, v6, &v16);
    v13 = this[68];
    sub_10236200(v12, (int)((double)v16 - (double)v13 * 1.75), v14, v13);
    sub_10236250(&v9, &v15, &v10, &v11);
    v11 = (int)((double)v16 - (double)(int)this[68] * 2.25 - (double)v15);
    sub_10236200(v9, v15, v10, v11);
  }
  return sub_100BB5B0((int)(this - 11), (int)this);
}
