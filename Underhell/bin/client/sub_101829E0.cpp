void *__thiscall sub_101829E0(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  void *result; // eax
  int v8; // [esp-4h] [ebp-24h]
  _BYTE v9[4]; // [esp+8h] [ebp-18h] BYREF
  _BYTE v10[4]; // [esp+Ch] [ebp-14h] BYREF
  int v11; // [esp+10h] [ebp-10h] BYREF
  int v12; // [esp+14h] [ebp-Ch] BYREF
  int v13; // [esp+18h] [ebp-8h] BYREF
  int v14; // [esp+1Ch] [ebp-4h] BYREF

  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 20) + 820))(*(_DWORD *)(this + 20));
  (*(void (__thiscall **)(int))(*(_DWORD *)(this - 252) + 884))(this - 252);
  (*(void (__thiscall **)(int))(*(_DWORD *)(this - 252) + 888))(this - 252);
  (*(void (__thiscall **)(_DWORD, int *, int *))(**(_DWORD **)(this + 20) + 920))(*(_DWORD *)(this + 20), &v13, &v14);
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)(this - 252) + 900))(this - 252);
  v14 += v2;
  v3 = sub_102374C0(this - 252);
  v4 = *(_DWORD *)(this + 216);
  v13 = v3;
  if ( v4 >= v14 )
  {
    sub_102361A0(v3, v4);
    sub_102361A0(v13, *(_DWORD *)(this + 216));
  }
  else
  {
    sub_102361A0(v3, v14);
    sub_102361A0(v13, v14);
  }
  (*(void (__thiscall **)(int, _BYTE *, _BYTE *, int *, int *))(*(_DWORD *)dword_1047CA6C + 348))(
    dword_1047CA6C,
    v9,
    v10,
    &v11,
    &v12);
  v5 = sub_102374F0(this - 252);
  v8 = (v12 - v5) / 2;
  v6 = sub_102374C0(this - 252);
  sub_10236140((v11 - v6) / 2, v8);
  result = off_103DC81C;
  *(float *)(this + 56) = *((float *)off_103DC81C + 3) + 1.0;
  return result;
}
