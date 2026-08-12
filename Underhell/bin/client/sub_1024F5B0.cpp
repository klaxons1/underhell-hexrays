int __thiscall sub_1024F5B0(int (__thiscall ***this)(void *, int, int))
{
  int v2; // ecx
  int v3; // eax
  int v5; // [esp+18h] [ebp-18h] BYREF
  int v6; // [esp+1Ch] [ebp-14h] BYREF
  int v7; // [esp+20h] [ebp-10h] BYREF
  int v8; // [esp+24h] [ebp-Ch] BYREF
  int v9; // [esp+28h] [ebp-8h] BYREF
  int v10; // [esp+2Ch] [ebp-4h] BYREF

  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68, &v6, &v8);
  (*this)[61](this, 1, 0);
  sub_102361D0(this, (int)&v5, (int)&v7);
  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA6C + 148))(dword_1047CA6C, &v9, &v10);
  v2 = v6 - v5 / 2;
  v3 = v8 - v7 / 2;
  if ( v2 + v5 > v9 )
    v2 = v9 - v5;
  if ( v3 + v7 > v10 )
    v3 = v10 - v7;
  if ( v2 < 0 )
    v2 = 0;
  if ( v3 < 0 )
    v3 = 0;
  return sub_10236140(this, v2, v3);
}
