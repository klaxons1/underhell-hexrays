int __thiscall sub_1025B940(_WORD *this)
{
  int v2; // edi
  char v3; // dl
  int v4; // eax
  int v5; // eax
  int v6; // edi
  _DWORD *v7; // eax
  int v8; // edi
  _DWORD *v9; // eax
  char v11; // [esp+14h] [ebp-Ch]
  char v12; // [esp+18h] [ebp-8h]
  int v13; // [esp+1Ch] [ebp-4h] BYREF

  v2 = *(_DWORD *)this;
  v11 = (unsigned __int8)this[146] >> 7;
  v3 = this[146] & 1;
  LOBYTE(v13) = (this[146] & 2) != 0;
  v12 = v3;
  v4 = (*(int (__thiscall **)(_WORD *))(v2 + 240))(this);
  v5 = (*(int (__thiscall **)(_WORD *, int, char, char, int))(v2 + 1044))(this, v13, v12, v11, v4);
  (*(void (__thiscall **)(_WORD *, int))(v2 + 252))(this, v5);
  v6 = *(_DWORD *)this;
  v7 = (_DWORD *)(*(int (__thiscall **)(_WORD *, int *))(*(_DWORD *)this + 1008))(this, &v13);
  (*(void (__thiscall **)(_WORD *, _DWORD))(v6 + 220))(this, *v7);
  v8 = *(_DWORD *)this;
  v9 = (_DWORD *)(*(int (__thiscall **)(_WORD *, int *))(*(_DWORD *)this + 1012))(this, &v13);
  (*(void (__thiscall **)(_WORD *, _DWORD))(v8 + 216))(this, *v9);
  return sub_1024AD80((int)this);
}
