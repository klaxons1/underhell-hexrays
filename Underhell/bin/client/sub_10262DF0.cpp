int __thiscall sub_10262DF0(_BYTE *this)
{
  int (__thiscall **v2)(void *, int, int); // eax
  int v3; // ebx
  int (__thiscall *v4)(void *, int, int); // edx
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // ebx
  bool v9; // cc
  int (__thiscall ***v10)(void *, int *, _BYTE *); // ebp
  int (__thiscall ***v11)(void *, int, int); // esi
  int v12; // ebx
  void (__thiscall **v13)(int (__thiscall ***)(void *, int, int), int); // ebx
  int v14; // eax
  int v15; // ebp
  int v16; // eax
  int v17; // ebx
  void (__thiscall **v18)(int, int); // ebp
  int v19; // eax
  int v20; // ebp
  void (__thiscall **v21)(int, int); // ebx
  int v22; // eax
  int result; // eax
  int v24; // ecx
  char v25; // [esp+2Bh] [ebp-39h]
  int v26; // [esp+2Ch] [ebp-38h]
  int v27; // [esp+30h] [ebp-34h]
  int v28; // [esp+34h] [ebp-30h]
  int v29; // [esp+38h] [ebp-2Ch]
  int v30; // [esp+3Ch] [ebp-28h]
  int v31; // [esp+40h] [ebp-24h] BYREF
  int v32; // [esp+44h] [ebp-20h]
  int v33; // [esp+48h] [ebp-1Ch]
  int v34; // [esp+4Ch] [ebp-18h] BYREF
  int v35; // [esp+50h] [ebp-14h] BYREF
  int v36; // [esp+54h] [ebp-10h]
  _BYTE v37[4]; // [esp+58h] [ebp-Ch] BYREF
  _BYTE v38[4]; // [esp+5Ch] [ebp-8h] BYREF
  _BYTE v39[4]; // [esp+60h] [ebp-4h] BYREF

  if ( (this[376] & 1) != 0 )
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 824))(this);
  sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)&v31, (int)v37);
  v2 = *(int (__thiscall ***)(void *, int, int))this;
  v3 = *((_DWORD *)this + 84);
  *((_DWORD *)this + 104) = *((_DWORD *)this + 95) + 1;
  v4 = v2[258];
  *((_DWORD *)this + 103) = 0;
  v36 = v3;
  v5 = 0;
  if ( (int)((double (__thiscall *)(_BYTE *))v4)(this) <= v3 )
    v5 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 92) + 772))(*((_DWORD *)this + 92));
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 92) + 128))(*((_DWORD *)this + 92)) )
    v6 = sub_102374C0(*((int (__thiscall ****)(void *, int *, _BYTE *))this + 92));
  else
    v6 = 0;
  v33 = v31 - v6 - 8;
  v25 = 0;
  v27 = 0;
  v7 = v5;
  v28 = v5;
  if ( v5 >= v3 )
    goto LABEL_30;
  do
  {
    if ( v25 )
      break;
    v26 = 0;
    if ( v7 < 0 || v7 >= *((_DWORD *)this + 84) )
      goto LABEL_29;
    v8 = 0;
    v9 = *((_DWORD *)this + 68) <= 0;
    v32 = *(_DWORD *)(*((_DWORD *)this + 81) + 4 * v7);
    v30 = 0;
    if ( v9 )
      goto LABEL_28;
    while ( 1 )
    {
      v10 = *(int (__thiscall ****)(void *, int *, _BYTE *))(*((_DWORD *)this + 54)
                                                           + 72 * *(unsigned __int8 *)(v8 + *((_DWORD *)this + 65)));
      v11 = (int (__thiscall ***)(void *, int, int))(*(int (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)this + 1008))(
                                                      this,
                                                      v32,
                                                      v8);
      if ( ((unsigned __int8 (__thiscall *)(int (__thiscall ***)(void *, int *, _BYTE *)))(*v10)[32])(v10) )
        break;
LABEL_24:
      v30 = ++v8;
      if ( v8 >= *((_DWORD *)this + 68) )
        goto LABEL_27;
    }
    v29 = sub_102374C0(v10);
    if ( !v11 )
      goto LABEL_23;
    v12 = (**(int (__thiscall ***)(_BYTE *))this)(this);
    if ( ((int (__thiscall *)(int (__thiscall ***)(void *, int, int)))(*v11)[37])(v11) != v12 )
    {
      v13 = (void (__thiscall **)(int (__thiscall ***)(void *, int, int), int))(*v11 + 38);
      v14 = (**(int (__thiscall ***)(_BYTE *))this)(this);
      (*v13)(v11, v14);
    }
    if ( !((unsigned __int8 (__thiscall *)(int (__thiscall ***)(void *, int, int)))(*v11)[32])(v11) )
      ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), int))(*v11)[31])(v11, 1);
    v15 = *((_DWORD *)this + 103) + v26 + 2;
    sub_10236140(v11, v15, *((_DWORD *)this + 104) + v27 * *((_DWORD *)this + 96));
    v16 = v29 + v15;
    if ( v29 + v15 >= v33 )
      v16 = v33;
    sub_102361A0(v11, v16 - v15, *((_DWORD *)this + 96) - 1);
    ((void (__thiscall *)(int (__thiscall ***)(void *, int, int)))(*v11)[4])(v11);
    v17 = dword_1047CA6C;
    v18 = (void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 336);
    v19 = ((int (__thiscall *)(int (__thiscall ***)(void *, int, int), _DWORD))**v11)(v11, 0);
    (*v18)(v17, v19);
    ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), _BYTE *, int *, _BYTE *, int *))(*v11)[7])(
      v11,
      v39,
      &v35,
      v38,
      &v34);
    if ( v34 - v35 >= *((_DWORD *)this + 96) - 3 )
    {
      v20 = dword_1047CA6C;
      v21 = (void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 340);
      v22 = ((int (__thiscall *)(int (__thiscall ***)(void *, int, int)))**v11)(v11);
      (*v21)(v20, v22);
      v8 = v30;
LABEL_23:
      v26 += v29;
      goto LABEL_24;
    }
    v25 = 1;
LABEL_27:
    v7 = v28;
LABEL_28:
    ++v27;
    v3 = v36;
LABEL_29:
    v28 = ++v7;
  }
  while ( v7 < v3 );
LABEL_30:
  result = (*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 90) + 124))(*((_DWORD *)this + 90), 0);
  if ( *((int *)this + 84) < 1 )
  {
    v24 = *((_DWORD *)this + 110);
    if ( v24 )
    {
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v24 + 4))(
        v24,
        *((_DWORD *)this + 103) + 8,
        *((_DWORD *)this + 104) + 4);
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**((_DWORD **)this + 110) + 16))(
        *((_DWORD *)this + 110),
        v31 - 8,
        *((_DWORD *)this + 96));
      return (***((int (__thiscall ****)(_DWORD))this + 110))(*((_DWORD *)this + 110));
    }
  }
  return result;
}
