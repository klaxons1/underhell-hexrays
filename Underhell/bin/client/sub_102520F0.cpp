int __thiscall sub_102520F0(int (__thiscall ****this)(void *, int, int))
{
  char v2; // al
  int (__thiscall *v3)(void *, int, int); // edx
  int v4; // eax
  int v5; // ecx
  int v7; // [esp+30h] [ebp-28h]
  int v8; // [esp+38h] [ebp-20h] BYREF
  int v9; // [esp+3Ch] [ebp-1Ch] BYREF
  int v10; // [esp+40h] [ebp-18h] BYREF
  int v11; // [esp+44h] [ebp-14h] BYREF
  int v12; // [esp+48h] [ebp-10h] BYREF
  int v13; // [esp+4Ch] [ebp-Ch] BYREF
  _BYTE v14[4]; // [esp+50h] [ebp-8h] BYREF
  _BYTE v15[4]; // [esp+54h] [ebp-4h] BYREF

  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68, &v13, &v10);
  v2 = ((int (__thiscall *)(_DWORD, _BYTE *, _BYTE *))(*this)[250])(this, v15, v14);
  v3 = (*this[98])[223];
  if ( v2 )
    ((void (__stdcall *)(const char *, int, int))v3)("&Cut", 1, v7);
  else
    ((void (__stdcall *)(const char *, _DWORD, int))v3)("&Cut", 0, v7);
  ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), const char *))(*this[98])[223])(this[98], "C&opy");
  ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), int))(*this[98])[31])(this[98], 1);
  ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), _DWORD))(*this[98])[12])(this[98], 0);
  (*this[98])[61](this[98], 1, 0);
  sub_102361D0(this[98], (int)&v12, (int)&v9);
  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA6C + 148))(dword_1047CA6C, &v11, &v8);
  v4 = v13;
  v5 = v10;
  if ( v11 - v12 <= v13 )
  {
    if ( v8 - v9 <= v10 )
      v5 = v10 - v9;
    v4 = v13 - v12;
  }
  else if ( v8 - v9 <= v10 )
  {
    v5 = v10 - v9;
  }
  sub_10236140(this[98], v4, v5);
  return ((int (__thiscall *)(int (__thiscall ***)(void *, int, int), _DWORD))(*this[98])[12])(this[98], 0);
}
