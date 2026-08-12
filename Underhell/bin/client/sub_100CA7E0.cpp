void __thiscall sub_100CA7E0(void *this, int a2)
{
  int v3; // ecx
  int v4; // ebx
  unsigned int v5; // edx
  int v6; // esi
  int *v7; // ecx
  int *v8; // edx
  int v9; // edx
  _DWORD *v10; // esi
  int v11; // edi
  int v12; // edx
  _DWORD *v13; // ecx
  unsigned int v14; // esi
  const char *v15; // [esp-4h] [ebp-814h]
  char v16[2048]; // [esp+Ch] [ebp-804h] BYREF
  void *v17; // [esp+80Ch] [ebp-4h]

  v3 = *(_DWORD *)(a2 + 20);
  v17 = this;
  v4 = 1;
  if ( v3 >= 8 )
  {
    v5 = *(_DWORD *)(a2 + 16);
    v6 = (unsigned __int8)v5;
    *(_DWORD *)(a2 + 20) = v3 - 8;
    if ( v3 == 8 )
    {
      v7 = *(int **)(a2 + 24);
      v8 = *(int **)(a2 + 28);
      *(_DWORD *)(a2 + 20) = 32;
      if ( v7 == v8 )
      {
        *(_DWORD *)(a2 + 20) = 1;
        *(_DWORD *)(a2 + 16) = 0;
        *(_DWORD *)(a2 + 24) = v7 + 1;
      }
      else if ( v7 <= v8 )
      {
        v9 = *v7;
        *(_DWORD *)(a2 + 24) = v7 + 1;
        *(_DWORD *)(a2 + 16) = v9;
      }
      else
      {
        *(_BYTE *)(a2 + 4) = 1;
        *(_DWORD *)(a2 + 16) = 0;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 16) = v5 >> 8;
    }
    goto LABEL_17;
  }
  v10 = *(_DWORD **)(a2 + 28);
  v11 = *(_DWORD *)(a2 + 16);
  v12 = 8 - v3;
  v13 = *(_DWORD **)(a2 + 24);
  if ( v13 == v10 )
  {
    *(_DWORD *)(a2 + 20) = 1;
    *(_DWORD *)(a2 + 16) = 0;
    *(_BYTE *)(a2 + 4) = 1;
LABEL_14:
    *(_DWORD *)(a2 + 24) = v13 + 1;
    goto LABEL_15;
  }
  if ( v13 <= v10 )
  {
    *(_DWORD *)(a2 + 16) = *v13;
    goto LABEL_14;
  }
  *(_BYTE *)(a2 + 4) = 1;
  *(_DWORD *)(a2 + 16) = 0;
LABEL_15:
  if ( *(_BYTE *)(a2 + 4) )
  {
LABEL_18:
    DevMsg("CHudHintKeyDisplay::MsgFunc_KeyHintText: string count != 1.\n");
    return;
  }
  v14 = *(_DWORD *)(a2 + 16);
  v4 = (v14 & dword_1039BF80[v12]) << *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a2 + 20) = 32 - v12;
  *(_DWORD *)(a2 + 16) = v14 >> v12;
  v6 = v4 | v11;
  this = v17;
LABEL_17:
  if ( v6 != 1 )
    goto LABEL_18;
  sub_1022C220(v16, 2048, 0, 0);
  if ( sub_100CA290((int)this, v4, v16) )
  {
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 124))(this, 1);
    v15 = "KeyHintMessageShow";
  }
  else
  {
    v15 = "KeyHintMessageHide";
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
  sub_10248C80(v15);
}
