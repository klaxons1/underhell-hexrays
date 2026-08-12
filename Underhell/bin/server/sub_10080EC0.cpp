char __thiscall sub_10080EC0(int this)
{
  char *v2; // eax
  int v3; // edi
  char v4; // bl
  int v5; // eax
  char result; // al
  int v7; // edi
  int *v8; // eax
  int v9; // ecx
  double v10; // st7
  int v11; // ecx
  double v12; // st7
  int v13; // edx
  int v14; // edi
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  _DWORD *v19; // eax
  _DWORD *v20; // edi
  int *v21; // eax
  int v22; // ecx
  char Buffer[256]; // [esp+Ch] [ebp-110h] BYREF
  int v24; // [esp+10Ch] [ebp-10h] BYREF
  int v25; // [esp+110h] [ebp-Ch]
  int v26; // [esp+114h] [ebp-8h]
  float v27; // [esp+118h] [ebp-4h]

  if ( *(_DWORD *)(dword_106934A4 + 48) )
  {
    v2 = sub_1001E280(Buffer, "[Nav] %s", "Finding new path\n");
    sub_10029660(*(_DWORD **)(this + 4), (int)v2);
  }
  v3 = *(_DWORD *)(this + 36);
  sub_100B9C50(v3);
  *(_DWORD *)(v3 + 44) = -1;
  v4 = 0;
  switch ( sub_100A6180(*(_DWORD *)(this + 36)) )
  {
    case 1:
      v19 = (_DWORD *)sub_1007E430(*(_DWORD **)(this + 36));
      v20 = v19;
      if ( !v19 )
        goto LABEL_16;
      v21 = sub_10019640(v19);
      v24 = *v21;
      v25 = v21[1];
      v22 = *(_DWORD *)(this + 4);
      v26 = v21[2];
      (*(void (__thiscall **)(int, _DWORD *, int *))(*(_DWORD *)v22 + 2040))(v22, v20, &v24);
      sub_100A60D0(&v24);
      goto LABEL_15;
    case 2:
      v7 = sub_1007E430(*(_DWORD **)(this + 36));
      if ( !v7 )
        goto LABEL_16;
      v8 = (int *)sub_100217F0(*(void **)(this + 4));
      v24 = *v8;
      v9 = *(_DWORD *)(this + 36);
      v25 = v8[1];
      v26 = v8[2];
      v10 = *(float *)(v9 + 4);
      v11 = *(_DWORD *)(this + 4);
      v27 = v10;
      v12 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v11 + 2044))(v11);
      if ( v27 < v12 )
      {
        *(float *)(*(_DWORD *)(this + 36) + 4) = v12;
        v27 = v12;
      }
      (*(void (__thiscall **)(_DWORD, int, int *))(**(_DWORD **)(this + 4) + 2040))(*(_DWORD *)(this + 4), v7, &v24);
      sub_100A60D0(&v24);
      v13 = *(_DWORD *)this;
      *(float *)(*(_DWORD *)(this + 36) + 4) = v27;
      result = (*(int (__thiscall **)(int))(v13 + 76))(this);
      break;
    case 3:
      v5 = sub_1007E400((_DWORD *)this);
      return sub_10080C20(this, v5);
    case 4:
    case 6:
    case 7:
LABEL_15:
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 76))(this);
      goto LABEL_16;
    case 5:
      v4 = 0;
      v14 = sub_1008DDF0(*(_DWORD *)(*(_DWORD *)(this + 4) + 2596));
      if ( v14 == -1 )
        goto LABEL_16;
      v15 = *(_DWORD *)(this + 36);
      v27 = *(float *)(*(_DWORD *)(this + 4) + 2596);
      v16 = sub_100A6140(v15);
      v17 = sub_1008D680(v16);
      if ( v17 == -1 )
        goto LABEL_16;
      v18 = sub_1008FD20(v14, v17);
      if ( !v18 )
        goto LABEL_16;
      sub_100A61F0(v18, 0);
      sub_100A6090(1);
      result = 1;
      break;
    default:
LABEL_16:
      result = v4;
      break;
  }
  return result;
}
