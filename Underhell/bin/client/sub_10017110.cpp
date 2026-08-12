int __thiscall sub_10017110(int this, int a2, int a3, int a4)
{
  int v4; // ebx
  int v5; // edi
  int v7; // ebx
  int v9; // [esp-8h] [ebp-14h]
  int v10; // [esp-8h] [ebp-14h]
  int v11; // [esp-4h] [ebp-10h]

  v4 = a3;
  v5 = a2;
  v11 = a4;
  v9 = a3;
  *(_DWORD *)(this + 180) = a2;
  *(_BYTE *)(this + 188) = 1;
  *(_DWORD *)(this + 184) = v4;
  sub_10016C90(&a2, &a3, v9, v11);
  switch ( v4 )
  {
    case 4:
    case 5:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 40))(v5, 1);
      break;
    case 6:
    case 7:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 40))(v5, 2);
      break;
    case 8:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 40))(v5, 8);
      break;
    default:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 40))(v5, v4);
      break;
  }
  v7 = a3;
  (*(void (__thiscall **)(_DWORD, int, int, int))(**(_DWORD **)(this + 180) + 68))(
    *(_DWORD *)(this + 180),
    a2,
    a3,
    this);
  *(_DWORD *)(this + 208) = v5 + 4;
  *(_DWORD *)(this + 216) = 0;
  *(_DWORD *)(this + 212) = v7;
  *(_BYTE *)(this + 240) = 0;
  *(_DWORD *)(this + 220) = *(_DWORD *)(this + 156);
  *(_DWORD *)(this + 192) = *(_DWORD *)(this + 164);
  v10 = a2;
  *(_BYTE *)(this + 204) = *(_BYTE *)(this + 176);
  *(_DWORD *)(this + 224) = 0;
  sub_10016990(this + 244, v5, v10, (_DWORD *)this);
  *(_DWORD *)(this + 224) = 0;
  return sub_10016A00((_DWORD *)(this + 244));
}
