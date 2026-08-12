int __thiscall sub_10258D20(int (__thiscall ***this)(void *, int *, int *))
{
  char v2; // bl
  char v3; // al
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  int result; // eax
  int (__thiscall *v9)(void *, int *, int *); // edx
  char v10; // [esp+17h] [ebp-15h]
  int v11; // [esp+18h] [ebp-14h] BYREF
  int v12; // [esp+1Ch] [ebp-10h] BYREF
  int v13; // [esp+20h] [ebp-Ch] BYREF
  int v14; // [esp+24h] [ebp-8h] BYREF
  int v15; // [esp+28h] [ebp-4h] BYREF

  v2 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 32))(dword_1047CA68, 108);
  v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 52))(dword_1047CA68, 108);
  v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 40))(dword_1047CA68, 108);
  if ( !v2 && !v3 && !v10 )
    goto LABEL_9;
  v4 = (int)this[76];
  if ( v4 == -1 )
    goto LABEL_9;
  v5 = (int)this[77];
  if ( v5 < v4 )
  {
    v4 = (int)this[77];
    v5 = (int)this[76];
  }
  sub_10258910(this, v4, &v13, &v14);
  sub_10258910(this, v5, &v15, &v13);
  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68, &v12, &v11);
  sub_10236F60(this, &v12, &v11);
  v6 = (*(int (__thiscall **)(int, int (__thiscall **)(void *, int *, int *)))(*(_DWORD *)dword_1047CA6C + 268))(
         dword_1047CA6C,
         this[80]);
  v7 = v6 + v13;
  result = v11;
  if ( v14 >= v11 || v7 <= v11 )
  {
LABEL_9:
    v9 = (*this)[4];
    this[76] = (int (__thiscall **)(void *, int *, int *))-1;
    ((void (__thiscall *)(int (__thiscall ***)(void *, int *, int *)))v9)(this);
    return sub_10252370(this);
  }
  return result;
}
