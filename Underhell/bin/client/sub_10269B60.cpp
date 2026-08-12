void __thiscall sub_10269B60(int this, int a2)
{
  int v3; // edi
  _DWORD *v4; // edi
  int v5; // eax
  _DWORD *v6; // ebx
  int v7; // eax
  _DWORD *v8; // ebx
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // eax
  int v13; // ecx
  int v14; // ebx
  int v15; // edi
  _DWORD *v16; // ebx
  int v17; // eax
  int v18; // ecx
  int v19; // ebx
  int v20; // edi
  int v21; // eax
  int v22; // ecx
  _BYTE v23[4]; // [esp+8h] [ebp-4h] BYREF

  v3 = *(_DWORD *)(this + 236);
  if ( v3 )
  {
    switch ( a2 )
    {
      case 'J':
        if ( *(int *)(this + 260) > 0 )
          sub_10269A90((int *)this, **(_DWORD **)(this + 248));
        return;
      case 'K':
        if ( v3 > 0 )
          sub_10269A90((int *)this, *(_DWORD *)(*(_DWORD *)(this + 248) + 4 * *(_DWORD *)(this + 260) - 4));
        return;
      case 'L':
        sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)&a2, (int)v23);
        v13 = sub_10268A80((_DWORD *)this);
        if ( !v13 )
          v13 = a2;
        v14 = a2 / v13;
        v15 = v14 * (*(int (__thiscall **)(int))(*(_DWORD *)this + 848))(this);
        v16 = (_DWORD *)(this + 248);
        v17 = sub_100B41A0((_DWORD *)(this + 248), (_DWORD *)(this + 308)) - v15;
        if ( v17 < 0 )
          v17 = 0;
        goto LABEL_23;
      case 'M':
        sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)&a2, (int)v23);
        v18 = sub_10268A80((_DWORD *)this);
        if ( !v18 )
          v18 = a2;
        v19 = a2 / v18;
        v20 = v19 * (*(int (__thiscall **)(int))(*(_DWORD *)this + 848))(this);
        v16 = (_DWORD *)(this + 248);
        v21 = sub_100B41A0((_DWORD *)(this + 248), (_DWORD *)(this + 308));
        v22 = *(_DWORD *)(this + 260);
        v17 = v20 + v21;
        if ( v17 >= v22 )
          v17 = v22 - 1;
LABEL_23:
        sub_10269A90((int *)this, *(_DWORD *)(*v16 + 4 * v17));
        return;
      case 'X':
        v4 = (_DWORD *)(this + 248);
        v5 = sub_100B41A0((_DWORD *)(this + 248), (_DWORD *)(this + 308)) - 1;
        if ( v5 < 0 )
          v5 = 0;
        sub_10269A90((int *)this, *(_DWORD *)(*v4 + 4 * v5));
        return;
      case 'Y':
        v8 = (_DWORD *)(this + 248);
        v9 = sub_100B41A0((_DWORD *)(this + 248), (_DWORD *)(this + 308));
        v10 = v9 - (*(int (__thiscall **)(int))(*(_DWORD *)this + 848))(this);
        if ( v10 < 0 )
          v10 = 0;
        goto LABEL_15;
      case 'Z':
        v6 = (_DWORD *)(this + 248);
        v7 = sub_100B41A0((_DWORD *)(this + 248), (_DWORD *)(this + 308)) + 1;
        if ( v7 >= v3 )
          v7 = v3 - 1;
        sub_10269A90((int *)this, *(_DWORD *)(*v6 + 4 * v7));
        return;
      case '[':
        v8 = (_DWORD *)(this + 248);
        v11 = sub_100B41A0((_DWORD *)(this + 248), (_DWORD *)(this + 308));
        v10 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 848))(this) + v11;
        v12 = *(_DWORD *)(this + 260);
        if ( v10 >= v12 )
          v10 = v12 - 1;
LABEL_15:
        sub_10269A90((int *)this, *(_DWORD *)(*v8 + 4 * v10));
        break;
      default:
        sub_10236CD0((void *)this, a2);
        break;
    }
  }
}
