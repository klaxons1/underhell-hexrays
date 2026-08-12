int __thiscall sub_1026C4A0(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v5; // edx
  int v6; // edi
  _DWORD *v7; // ecx
  int v8; // edi
  int result; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  _WORD v15[256]; // [esp+18h] [ebp-200h] BYREF

  v4 = this[75];
  v5 = this[89];
  v6 = 0;
  if ( v4 <= 0 )
  {
LABEL_5:
    v6 = -1;
  }
  else
  {
    v7 = (_DWORD *)this[72];
    while ( *v7 != v5 )
    {
      ++v6;
      ++v7;
      if ( v6 >= v4 )
        goto LABEL_5;
    }
  }
  v8 = a2 + v6;
  if ( v8 <= v4 - 1 )
  {
    if ( v8 >= 0 )
      goto LABEL_13;
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)this[57] + 128))(this[57]) )
    {
      v8 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[57] + 772))(this[57]);
      goto LABEL_13;
    }
  }
  else if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)this[57] + 128))(this[57]) )
  {
    v8 = 0;
    goto LABEL_13;
  }
  v8 = this[75] - 1;
LABEL_13:
  result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[57] + 128))(this[57]);
  if ( !(_BYTE)result )
    goto LABEL_22;
  v10 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[57] + 772))(this[57]);
  v11 = this[57];
  if ( v8 > v10 + this[56] - 1 )
  {
    v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 772))(v11);
LABEL_18:
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)this[57] + 768))(this[57], a2 + v12);
    (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
    goto LABEL_19;
  }
  if ( v8 < (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 772))(v11) )
  {
    v12 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[57] + 772))(this[57]);
    goto LABEL_18;
  }
LABEL_19:
  if ( v8 > (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[57] + 772))(this[57]) + this[56] - 1
    || (result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[57] + 772))(this[57]), v8 < result) )
  {
    result = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)this[57] + 768))(this[57], v8);
  }
LABEL_22:
  if ( v8 >= 0 && v8 < this[75] )
    result = sub_1026BAB0(this, *(_DWORD *)(this[72] + 4 * v8));
  if ( a3 < this[64] )
  {
    v13 = *(_DWORD *)(this[58] + 12 * this[89]);
    (*(void (__thiscall **)(int, _WORD *, int))(*(_DWORD *)v13 + 776))(v13, v15, 255);
    if ( !v15[0] )
      return sub_1026C4A0(a2, a3 + 1);
    v14 = *(_DWORD *)(this[58] + 12 * this[89]);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 128))(v14);
    if ( !(_BYTE)result )
      return sub_1026C4A0(a2, a3 + 1);
  }
  return result;
}
