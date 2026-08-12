int __thiscall sub_102869D0(int (__thiscall ***this)(void *, int *, int *), int a2)
{
  int (__thiscall **v3)(void *, int *, int *); // ecx
  int result; // eax
  int (__thiscall *v5)(void *, int *, int *); // edx
  int v6; // edi
  int v7; // ebx
  int v8; // eax
  int (__thiscall **v9)(void *, int *, int *); // edx
  int v10; // eax
  int v11; // eax
  int v12; // [esp+Ch] [ebp-8h] BYREF
  int (__thiscall **v13)(void *, int *, int *); // [esp+10h] [ebp-4h] BYREF

  (*(void (__thiscall **)(int, int *, int (__thiscall ***)(void *, int *, int *)))(*(_DWORD *)dword_1047CA68 + 28))(
    dword_1047CA68,
    &v12,
    &v13);
  sub_10236F60(this, &v12, &v13);
  v3 = this[53];
  result = (int)v13;
  if ( !*((_BYTE *)this + 207) )
    result = v12;
  if ( result < (int)v3 )
    goto LABEL_7;
  if ( result < (int)this[54] )
  {
    v5 = **this;
    *((_BYTE *)this + 208) = 1;
    v6 = dword_1047CA68;
    v7 = *(_DWORD *)dword_1047CA68;
    v8 = ((int (__thiscall *)(int (__thiscall ***)(void *, int *, int *)))v5)(this);
    (*(void (__thiscall **)(int, int))(v7 + 8))(v6, v8);
    v9 = this[54];
    result = v12;
    this[55] = this[53];
    this[58] = v13;
    this[57] = (int (__thiscall **)(void *, int *, int *))result;
    this[56] = v9;
    return result;
  }
  if ( result >= (int)v3 )
  {
    if ( result >= (int)this[54] )
    {
      v11 = ((int (__thiscall *)(int (__thiscall ***)(void *, int *, int *)))(*this)[193])(this);
      return ((int (__thiscall *)(int (__thiscall ***)(void *, int *, int *), int))(*this)[192])(
               this,
               (int)this[62] + v11);
    }
  }
  else
  {
LABEL_7:
    v10 = ((int (__thiscall *)(int (__thiscall ***)(void *, int *, int *)))(*this)[193])(this);
    return ((int (__thiscall *)(int (__thiscall ***)(void *, int *, int *), int))(*this)[192])(
             this,
             v10 - (_DWORD)this[62]);
  }
  return result;
}
