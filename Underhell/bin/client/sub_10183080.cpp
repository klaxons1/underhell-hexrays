int __thiscall sub_10183080(_DWORD **this, int a2)
{
  int i; // edi
  int v4; // eax
  _DWORD *v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int (__thiscall *v11)(_DWORD **, _DWORD); // edx
  _DWORD *v13; // [esp+8h] [ebp-1Ch]
  int (__thiscall **v14)(_DWORD *, int); // [esp+Ch] [ebp-18h]
  int v15; // [esp+10h] [ebp-14h] BYREF
  int (__thiscall **v16)(_DWORD *, int); // [esp+14h] [ebp-10h]
  int v17; // [esp+18h] [ebp-Ch] BYREF
  _DWORD *v18; // [esp+1Ch] [ebp-8h]
  _DWORD *v19; // [esp+20h] [ebp-4h]

  for ( i = 0; i < sub_100818B0(this[78]); ++i )
  {
    v4 = sub_10279020(i);
    (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)v4 + 12))(v4, &v15, &v17);
    v19 = (_DWORD *)dword_1047CA7C;
    v18 = (_DWORD *)dword_1047CA7C;
    v5 = (_DWORD *)sub_10279020(i);
    v6 = *v5;
    v13 = v5;
    v16 = (int (__thiscall **)(_DWORD *, int))(*v19 + 52);
    v14 = (int (__thiscall **)(_DWORD *, int))(*v18 + 52);
    v7 = ((int (__thiscall *)(_DWORD **, int))(*this)[20])(this, v17);
    v8 = (*v16)(v19, v7);
    v9 = ((int (__thiscall *)(_DWORD **, int, int))(*this)[20])(this, v15, v8);
    v10 = (*v14)(v18, v9);
    (*(void (__thiscall **)(_DWORD *, int))(v6 + 16))(v13, v10);
  }
  (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD))(*this[68] + 924))(this[68], this[78], 0);
  (*(void (__thiscall **)(_DWORD *, int))(*this[68] + 124))(this[68], 1);
  v11 = (int (__thiscall *)(_DWORD **, _DWORD))(*this)[54];
  v19 = 0;
  return v11(this, 0);
}
