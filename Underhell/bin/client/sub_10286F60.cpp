int __thiscall sub_10286F60(int this)
{
  int v2; // edi
  int v3; // ebp
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int (__thiscall ***v9)(void *, int *, _BYTE *); // ecx
  int v10; // ebx
  int v11; // edi
  int v12; // eax
  int result; // eax
  int v14; // ecx
  bool v15; // cc
  int (__thiscall ****v16)(void *, int, int); // edi
  int v17; // eax
  int v18; // eax
  int v19; // [esp+0h] [ebp-34h]
  int v20; // [esp+14h] [ebp-20h]
  int v21; // [esp+18h] [ebp-1Ch] BYREF
  int v22; // [esp+1Ch] [ebp-18h] BYREF
  int v23; // [esp+20h] [ebp-14h]
  int v24; // [esp+24h] [ebp-10h]
  int v25; // [esp+28h] [ebp-Ch]
  int v26; // [esp+2Ch] [ebp-8h]
  int v27; // [esp+30h] [ebp-4h]

  sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)&v22, (int)&v21);
  v2 = sub_10286DE0((_DWORD *)this);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 264) + 124))(*(_DWORD *)(this + 264), 1);
  v3 = 0;
  (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 264) + 776))(*(_DWORD *)(this + 264), 0, v2);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 264) + 784))(*(_DWORD *)(this + 264), v21);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 264) + 816))(*(_DWORD *)(this + 264), v21 / 4);
  v4 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(this + 264));
  sub_10236140(*(int (__thiscall ****)(void *, int, int))(this + 264), v22 - v4 - 2, 0);
  v19 = v21 - 2;
  v5 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(this + 264));
  sub_102361A0(*(int (__thiscall ****)(void *, int, int))(this + 264), v5, v19);
  v6 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 264) + 772))(*(_DWORD *)(this + 264));
  sub_10236140(*(int (__thiscall ****)(void *, int, int))(this + 268), 1, -v6);
  v7 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(this + 264));
  sub_102361A0(*(int (__thiscall ****)(void *, int, int))(this + 268), v22 - v7 - 2, v2);
  v8 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 264) + 772))(*(_DWORD *)(this + 264));
  v9 = *(int (__thiscall ****)(void *, int *, _BYTE *))(this + 264);
  v10 = *(_DWORD *)(this + 276) + *(_DWORD *)(this + 288);
  v11 = *(_DWORD *)(this + 280);
  v26 = v8;
  v20 = 0;
  v23 = 0;
  v12 = sub_102374C0(v9);
  result = (v22 - v10 - v12 - 12) / v11;
  v14 = 0;
  v15 = *(_DWORD *)(this + 256) <= 0;
  v24 = 0;
  v27 = result;
  if ( !v15 )
  {
    while ( 1 )
    {
      v25 = v14 % v11;
      if ( !(v14 % v11) )
        v3 += *(_DWORD *)(this + 288);
      v16 = (int (__thiscall ****)(void *, int, int))(*(_DWORD *)(this + 208)
                                                    + 16 * *(_DWORD *)(*(_DWORD *)(this + 244) + 4 * v14));
      if ( v20 < sub_102374F0((int (__thiscall ***)(void *, _BYTE *, int *))*v16) )
        v20 = sub_102374F0((int (__thiscall ***)(void *, _BYTE *, int *))*v16);
      if ( v23 >= v26 )
      {
        if ( v16[1] )
        {
          v17 = sub_102374F0((int (__thiscall ***)(void *, _BYTE *, int *))*v16);
          sub_10236200(v16[1], 0, v3, *(_DWORD *)(this + 276), v17);
        }
        v18 = sub_102374F0((int (__thiscall ***)(void *, _BYTE *, int *))*v16);
        sub_10236200(*v16, v10 + v27 * v25, v3, v27, v18);
      }
      v11 = *(_DWORD *)(this + 280);
      if ( v25 >= v11 - 1 )
      {
        v3 += v20;
        v23 += v20;
        v20 = 0;
      }
      result = v24 + 1;
      v15 = ++v24 < *(_DWORD *)(this + 256);
      if ( !v15 )
        break;
      v14 = v24;
    }
  }
  return result;
}
