void __usercall sub_1007CB20(int a1@<ecx>, int a2@<edi>, int a3@<esi>)
{
  _DWORD *v4; // esi
  int v5; // eax
  _DWORD *v6; // eax
  int v7; // edi
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // edi
  _DWORD *v15; // eax
  _DWORD *v16; // [esp-4h] [ebp-2Ch]
  int v17; // [esp+0h] [ebp-28h]
  int v18; // [esp+4h] [ebp-24h]
  int v19; // [esp+8h] [ebp-20h]
  _DWORD v21[3]; // [esp+18h] [ebp-10h] BYREF
  int v22; // [esp+24h] [ebp-4h]

  if ( !*(_BYTE *)(a1 + 9) && *(float *)(a1 + 16) <= (double)*(float *)(dword_106B31C8 + 12) )
  {
    v4 = *(_DWORD **)(a1 + 4);
    *(float *)(a1 + 16) = -1.0;
    if ( !(*(int (__thiscall **)(_DWORD *))(*v4 + 368))(v4)
      || (v5 = (*(int (__thiscall **)(_DWORD *))(*v4 + 368))(v4),
          !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 264))(v5)) )
    {
      v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v4 + 1480))(v4);
      if ( v6 )
      {
        sub_100285C0(v4, v6, 1);
        sub_1002B660((int)v4, 3);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *))(*v4 + 2004))(v4);
      }
    }
    if ( (unsigned __int8)sub_1007E040(v4[647]) )
    {
      if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 368))(*(_DWORD *)(a1 + 4)) )
      {
        LOBYTE(v22) = sub_1007CA50((_DWORD *)a1);
        sub_1007C870((_DWORD *)a1, v22);
        if ( !(_BYTE)v22 )
        {
          sub_1007C8F0(a1);
          return;
        }
        v10 = sub_10039AE0(v4, 367, 0);
        if ( (v10 == -1 || !(unsigned __int8)sub_100C4E90(v10)) && sub_1007C820((_DWORD *)a1) )
        {
          if ( sub_10023D80(v4, 21, 0) )
          {
            if ( (unsigned __int8)sub_100B8D10(v4 + 690) )
            {
              sub_1007C8F0(a1);
            }
            else if ( (unsigned __int8)sub_100B8CF0(v4 + 690)
                   && (*(_BYTE *)(a1 + 8) || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v4 + 1988))(v4)) )
            {
              *(_BYTE *)(a1 + 8) = 1;
              (*(void (__thiscall **)(_DWORD *, int, int))(*v4 + 1896))(v4, a2, a3);
              v11 = sub_10039AE0(v4, 137, 0);
              sub_100C7570(v11, COERCE_FLOAT(1), 1);
              v12 = (*(int (__thiscall **)(_DWORD *))(*v4 + 936))(v4);
              sub_100C8CD0(v12, COERCE_FLOAT(17));
            }
          }
          else if ( sub_10023D80(v4, 4, 0) && sub_1007E760(v4[647]) > 1.0 )
          {
            v13 = sub_10039AE0(v4, 367, 0);
            v14 = v13;
            if ( v13 != -1 && sub_10022CA0(*(_DWORD **)(a1 + 4), v13) )
              sub_100C74B0(v14, 1);
          }
        }
        v15 = (_DWORD *)sub_100217F0(v4);
        v21[0] = *v15;
        v21[1] = v15[1];
        v21[2] = v15[2];
        v7 = *v4;
        v9 = (*(int (__thiscall **)(_DWORD *, _DWORD *, _DWORD, _DWORD, _DWORD))(*v4 + 368))(
               v4,
               v21,
               1.0,
               0.80000001,
               0.0);
      }
      else
      {
        if ( !(*(int (__thiscall **)(_DWORD *))(*v4 + 1844))(v4) )
          return;
        v7 = *v4;
        v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD))(*v4 + 1844))(v4, 1.0, 0.2, 0.0);
        v16 = sub_10019640(v8);
        v9 = (*(int (__thiscall **)(_DWORD *, _DWORD *, int, int, int))(*v4 + 1844))(v4, v16, v17, v18, v19);
      }
      (*(void (__thiscall **)(_DWORD *, int))(v7 + 1704))(v4, v9);
    }
  }
}
