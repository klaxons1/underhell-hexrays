int *__thiscall sub_1024A400(_DWORD *this, _DWORD *a2, int *a3)
{
  int v4; // ebx
  int (__thiscall **v5)(int, int); // edi
  int v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // ebx
  int v9; // ebp
  int (__thiscall **v10)(_DWORD *, const char *, int); // edi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  int *result; // eax
  int v16; // [esp+30h] [ebp-18h] BYREF
  int v17; // [esp+34h] [ebp-14h] BYREF
  int v18; // [esp+38h] [ebp-10h] BYREF
  int v19; // [esp+3Ch] [ebp-Ch] BYREF
  int v20; // [esp+40h] [ebp-8h] BYREF
  int v21; // [esp+44h] [ebp-4h] BYREF

  if ( !(*(int (__thiscall **)(_DWORD *))(*this + 820))(this) )
  {
    v4 = dword_1047CA7C;
    v5 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA7C + 32);
    v6 = (*(int (__thiscall **)(_DWORD *))(*this + 80))(this);
    v7 = (_DWORD *)(*v5)(v4, v6);
    v8 = v7;
    if ( v7 )
    {
      v9 = *this;
      v10 = (int (__thiscall **)(_DWORD *, const char *, int))(*v7 + 12);
      v11 = (*(int (__thiscall **)(_DWORD *))(*this + 84))(this);
      v12 = (*v10)(v8, "Default", v11);
      (*(void (__thiscall **)(_DWORD *, int))(v9 + 816))(this, v12);
    }
  }
  (*(void (__thiscall **)(_DWORD *, int *, int *, int *, int *))(*this + 884))(this, &v18, &v20, &v19, &v21);
  *a2 = v19 + this[60] - v18;
  (*(void (__thiscall **)(_DWORD, int *, int *))(*(_DWORD *)this[54] + 12))(this[54], &v16, &v17);
  *a2 -= v16;
  (*(void (__thiscall **)(_DWORD, int *, int *))(*(_DWORD *)this[54] + 8))(this[54], &v16, &v17);
  *a2 += v16;
  v13 = 0;
  if ( (int)this[58] > 0 )
  {
    v14 = 0;
    do
    {
      *a2 += *(__int16 *)(v14 + this[55] + 4);
      ++v13;
      v14 += 12;
    }
    while ( v13 < this[58] );
  }
  result = (int *)(v21 + this[61] - v20);
  if ( (int)result <= v17 )
  {
    result = a3;
    *a3 = v17;
  }
  else
  {
    *a3 = (int)result;
  }
  return result;
}
