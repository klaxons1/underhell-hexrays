int __thiscall sub_1024DDC0(int this)
{
  int v2; // ebx
  int v3; // edi
  int v4; // ebp
  int v5; // eax
  int v6; // eax
  int (__thiscall **v7)(void *, int, int); // edx
  double v8; // st7
  int v9; // ebx
  int v10; // edi
  int v11; // ebp
  int *v12; // ecx
  int v13; // edx
  int result; // eax
  int v15; // [esp-4h] [ebp-2Ch]
  int v16; // [esp+0h] [ebp-28h]
  int (__thiscall ***v17)(void *, int, int); // [esp+4h] [ebp-24h]
  int v18; // [esp+10h] [ebp-18h] BYREF
  int v19; // [esp+14h] [ebp-14h] BYREF
  int v20; // [esp+18h] [ebp-10h] BYREF
  int v21; // [esp+1Ch] [ebp-Ch] BYREF
  _BYTE v22[4]; // [esp+20h] [ebp-8h] BYREF
  _BYTE v23[4]; // [esp+24h] [ebp-4h] BYREF

  nullsub_4();
  sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)&v18, (int)&v19);
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 972))(this);
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 976))(this);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 980))(this);
  sub_10236200(*(int (__thiscall ****)(void *, int, int))(this + 292), v3, 0, v18 - 2 * v3, v2);
  sub_10236200(*(int (__thiscall ****)(void *, int, int))(this + 300), 0, v3, v2, v19 - 2 * v3);
  sub_10236200(*(int (__thiscall ****)(void *, int, int))(this + 308), 0, 0, v3, v3);
  sub_10236200(*(int (__thiscall ****)(void *, int, int))(this + 312), v18 - v3, 0, v3, v3);
  sub_10236200(*(int (__thiscall ****)(void *, int, int))(this + 316), 0, v19 - v3, v3, v3);
  sub_10236200(*(int (__thiscall ****)(void *, int, int))(this + 296), v3, v19 - v2, v18 - v4 - v3, v2);
  sub_10236200(*(int (__thiscall ****)(void *, int, int))(this + 304), v18 - v2, v3, v2, v19 - v4 - v3);
  sub_10236200(*(int (__thiscall ****)(void *, int, int))(this + 320), v18 - v4, v19 - v4, v4, v4);
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 984))(this);
  sub_102361A0(*(int (__thiscall ****)(void *, int, int))(this + 324), v18 - 10, v5);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 292) + 212))(*(_DWORD *)(this + 292));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 296) + 212))(*(_DWORD *)(this + 296));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 300) + 212))(*(_DWORD *)(this + 300));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 304) + 212))(*(_DWORD *)(this + 304));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 308) + 212))(*(_DWORD *)(this + 308));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 312) + 212))(*(_DWORD *)(this + 312));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 316) + 212))(*(_DWORD *)(this + 316));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 320) + 212))(*(_DWORD *)(this + 320));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 332) + 212))(*(_DWORD *)(this + 332));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 344) + 212))(*(_DWORD *)(this + 344));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 328) + 212))(*(_DWORD *)(this + 328));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 336) + 212))(*(_DWORD *)(this + 336));
  v15 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 984))(this) - 5;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 984))(this);
  sub_10236200(*(int (__thiscall ****)(void *, int, int))(this + 344), 7, 8, v6 - 5, v15);
  v7 = *(int (__thiscall ***)(void *, int, int))this;
  *(float *)&v21 = 1.0;
  if ( ((unsigned __int8 (__thiscall *)(int))v7[21])(this) )
  {
    (*(void (__thiscall **)(int, _BYTE *, int *))(*(_DWORD *)dword_1047CA6C + 148))(dword_1047CA6C, v22, &v20);
    (*(void (__thiscall **)(int, _BYTE *, int *))(*(_DWORD *)dword_1047CA6C + 356))(dword_1047CA6C, v23, &v21);
    v8 = (double)v20 / (double)v21;
  }
  else
  {
    v8 = *(float *)&v21;
  }
  v9 = (int)(20.0 * v8);
  v10 = v9;
  v11 = (int)(8.0 * v8);
  if ( *(_BYTE *)(this + 393) )
    v11 = (int)(3.0 * v8);
  v12 = *(int **)(this + 340);
  v13 = *v12;
  v20 = (int)(v8 * 5.0);
  if ( (*(unsigned __int8 (__thiscall **)(int *))(v13 + 128))(v12) )
  {
    sub_10236140(*(int (__thiscall ****)(void *, int, int))(this + 340), v18 - v20 - v9, v11);
    v10 = 2 * v9;
    sub_1024DAA0(this, 2 * v9, *(_DWORD *)(this + 340), v16, v17);
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 336) + 128))(*(_DWORD *)(this + 336)) )
  {
    sub_10236140(*(int (__thiscall ****)(void *, int, int))(this + 336), v18 - v20 - v10, v11);
    v10 += v9;
    sub_1024DAA0(this, v10, *(_DWORD *)(this + 336), v16, v17);
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 332) + 128))(*(_DWORD *)(this + 332)) )
  {
    sub_10236140(*(int (__thiscall ****)(void *, int, int))(this + 332), v18 - v20 - v10, v11);
    v10 += v9;
    sub_1024DAA0(this, v10, *(_DWORD *)(this + 332), v16, v17);
  }
  result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 328) + 128))(*(_DWORD *)(this + 328));
  if ( (_BYTE)result )
  {
    sub_10236140(*(int (__thiscall ****)(void *, int, int))(this + 328), v18 - v20 - v10, v11);
    return sub_1024DAA0(this, v10, *(_DWORD *)(this + 328), v16, v17);
  }
  return result;
}
