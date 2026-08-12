int __thiscall sub_10281920(int this)
{
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // edi
  int v6; // edi
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // edi
  int v11; // ebx
  int v12; // ebx
  int v13; // eax
  int v14; // edi
  int v15; // edi
  int v16; // ebx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // edi
  int v21; // ebx
  int v22; // eax
  int v24; // [esp+Ch] [ebp-8h] BYREF
  int v25; // [esp+10h] [ebp-4h] BYREF

  sub_1024DDC0(this);
  sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)&v24, (int)&v25);
  v2 = sub_102374F0(*(int (__thiscall ****)(void *, _BYTE *, int *))(this + 460));
  sub_10236200(*(int (__thiscall ****)(void *, int, int))(this + 464), 16, 40, v24 - 32, v2);
  v3 = sub_102374F0(*(int (__thiscall ****)(void *, _BYTE *, int *))(this + 460)) + 44;
  v4 = sub_102374F0(*(int (__thiscall ****)(void *, _BYTE *, int *))(this + 460));
  sub_10236200(*(int (__thiscall ****)(void *, int, int))(this + 460), 16, v3, v24 - 32, v4);
  v5 = v3 + sub_102374F0(*(int (__thiscall ****)(void *, _BYTE *, int *))(this + 460)) + 4;
  sub_10236140(*(int (__thiscall ****)(void *, int, int))(*(_DWORD *)(this + 472) + 24), 16, v5);
  sub_102361A0(*(int (__thiscall ****)(void *, int, int))(*(_DWORD *)(this + 472) + 24), v24 - 32, v25 - v5 - 145);
  v6 = v25 - 16;
  v7 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(this + 496));
  v8 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(this + 504)) + v7;
  v9 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(this + 488)) + v8 + 28;
  v10 = v6 - sub_102374F0(*(int (__thiscall ****)(void *, _BYTE *, int *))(this + 480));
  v11 = v9 - sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(this + 480));
  sub_10236140(*(int (__thiscall ****)(void *, int, int))(this + 480), v11, v10);
  v12 = -6 - sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(this + 484)) + v11;
  sub_10236140(*(int (__thiscall ****)(void *, int, int))(this + 484), v12, v10);
  v13 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(this + 476));
  sub_10236140(*(int (__thiscall ****)(void *, int, int))(this + 476), -6 - v13 + v12, v10);
  v14 = -8 - sub_102374F0(*(int (__thiscall ****)(void *, _BYTE *, int *))(this + 468)) + v10;
  sub_10236200(*(int (__thiscall ****)(void *, int, int))(this + 468), 16, v14, v24 - 32, 2);
  v15 = -8 - sub_102374F0(*(int (__thiscall ****)(void *, _BYTE *, int *))(this + 496)) + v14;
  sub_10236140(*(int (__thiscall ****)(void *, int, int))(this + 784), 16, v15);
  sub_10236140(*(int (__thiscall ****)(void *, int, int))(this + 788), 166, v15);
  v15 -= 26;
  sub_10236140(*(int (__thiscall ****)(void *, int, int))(this + 492), 16, v15);
  v16 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(this + 492)) + 22;
  sub_10236140(*(int (__thiscall ****)(void *, int, int))(this + 796), v16, v15);
  v17 = sub_102374F0(*(int (__thiscall ****)(void *, _BYTE *, int *))(this + 492));
  sub_102361A0(*(int (__thiscall ****)(void *, int, int))(this + 796), 64, v17);
  v18 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(this + 796));
  sub_10236140(*(int (__thiscall ****)(void *, int, int))(this + 792), v16 + v18 + 6, v15);
  v19 = sub_102374F0(*(int (__thiscall ****)(void *, _BYTE *, int *))(this + 492));
  sub_102361A0(*(int (__thiscall ****)(void *, int, int))(this + 792), 64, v19);
  v20 = -8 - sub_102374F0(*(int (__thiscall ****)(void *, _BYTE *, int *))(this + 496)) + v15;
  sub_10236140(*(int (__thiscall ****)(void *, int, int))(this + 496), 16, v20);
  v21 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(this + 496)) + 22;
  sub_10236140(*(int (__thiscall ****)(void *, int, int))(this + 488), v21, v20);
  v22 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(this + 488));
  return sub_10236140(*(int (__thiscall ****)(void *, int, int))(this + 504), v21 + v22 + 6, v20);
}
