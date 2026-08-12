bool __thiscall sub_100366D0(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  int v5; // ebx
  int v6; // ecx
  int v7; // edx
  int v8; // edi
  int v9; // eax
  int v10; // esi
  int v11; // edi
  int v12; // [esp+10h] [ebp-34h]
  int v13; // [esp+14h] [ebp-30h]
  int v14; // [esp+18h] [ebp-2Ch]
  int v15; // [esp+40h] [ebp-4h]

  v3 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int))(*this + 1300))(this, a2);
  if ( !v3 )
    return 0;
  v5 = v3[5];
  v15 = v3[10];
  v12 = v3[6] & this[551];
  v6 = v3[3] & this[548];
  v13 = v3[7] & this[552];
  v7 = v3[4] & this[549];
  v8 = this[550];
  v14 = v3[8] & this[553];
  v9 = v3[9] & this[554];
  v10 = v15 & this[555];
  v11 = v5 & v8;
  return v6 || v7 || v11 || v12 || v13 || v14 || v9 || v10;
}
