void __userpurge sub_103CD090(float *a1@<ecx>, int a2@<edi>, int a3)
{
  int v3; // ebx
  int v4; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  int v8; // eax
  float *v9; // eax
  const char *v10; // ebx
  float *v11; // edi
  int v12; // eax
  const char *v13; // ebx
  int v14; // edi
  int v15; // eax
  bool v16; // zf
  int *v17; // ebx
  int v18; // eax
  float *v19; // eax
  float v20; // edx
  double v21; // st7
  int (__thiscall *v22)(float *); // eax
  float *v23; // eax
  int v24; // edi
  int v25; // eax
  int v26; // eax
  float *v27; // eax
  int v28; // edx
  void (__thiscall *v29)(int *, float *); // edx
  int v30; // eax
  float *v31; // eax
  int v32; // eax
  float *v33; // edi
  float *v34; // eax
  double v35; // st6
  double v36; // st7
  int v37; // [esp+4h] [ebp-15Ch]
  float v39[17]; // [esp+18h] [ebp-148h] BYREF
  float v40[24]; // [esp+5Ch] [ebp-104h] BYREF
  _BYTE v41[16]; // [esp+BCh] [ebp-A4h] BYREF
  _DWORD v42[7]; // [esp+CCh] [ebp-94h] BYREF
  float v43; // [esp+E8h] [ebp-78h]
  int v44[4]; // [esp+F8h] [ebp-68h] BYREF
  int v45; // [esp+108h] [ebp-58h]
  float v46[3]; // [esp+110h] [ebp-50h] BYREF
  _DWORD v47[4]; // [esp+11Ch] [ebp-44h] BYREF
  _DWORD v48[4]; // [esp+12Ch] [ebp-34h] BYREF
  float v49; // [esp+13Ch] [ebp-24h]
  float v50; // [esp+140h] [ebp-20h]
  float v51; // [esp+144h] [ebp-1Ch]
  float v52; // [esp+148h] [ebp-18h] BYREF
  float v53; // [esp+14Ch] [ebp-14h]
  float v54; // [esp+150h] [ebp-10h]
  float v55; // [esp+154h] [ebp-Ch] BYREF
  float v56; // [esp+158h] [ebp-8h]
  float v57; // [esp+15Ch] [ebp-4h]
  int savedregs; // [esp+160h] [ebp+0h] BYREF

  v3 = a3;
  v4 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 == dword_106EBE64 )
  {
    v6 = atoi(*(const char **)(a3 + 4));
    sub_103C95E0((int)a1, 1u, v6);
    return;
  }
  if ( v4 == dword_106EBE60 )
    goto LABEL_4;
  if ( v4 == dword_106EBE6C )
  {
    v7 = atoi(*(const char **)(a3 + 4));
    sub_103C95E0((int)a1, 2u, v7);
    return;
  }
  if ( v4 == dword_106EBE68 )
  {
LABEL_4:
    sub_103CA280((int)a1, -1);
    return;
  }
  if ( v4 == dword_106EBE78 )
  {
    sub_103C95E0((int)a1, 2u, 0);
    sub_103C95E0((int)a1, 2u, 1u);
    sub_100D1290(v39);
    if ( (unsigned __int8)sub_1023A760((int)"NPC_Vortigaunt.DispelImpact", (int)v39, 0) )
    {
      sub_100D78A0(v47, (int)a1, 0.80000001);
      sub_1023BE90(v42, (int)v39);
      v42[0] = 4;
      v8 = sub_1001F3C0(a1);
      sub_1023BE40(v47, v8, (int)v42);
      sub_102375F0(v44);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v47);
    }
    return;
  }
  if ( v4 == dword_106EBE74 )
    return;
  if ( v4 == dword_106EBE70 )
  {
    v9 = (float *)sub_10019640(a1);
    sub_103CA370((int)a1, (int)&savedregs, v9, 400.0, 1);
    return;
  }
  if ( v4 == dword_106EBE7C )
  {
    sub_103C7530(a1);
    return;
  }
  if ( v4 == dword_106EBE9C )
  {
    if ( *(float *)(dword_106B31C8 + 12) < (double)a1[1423] )
      return;
    v10 = *(const char **)(a3 + 4);
    v11 = 0;
    if ( !v10 || (v12 = atoi(v10), (v11 = (float *)v12) == 0) || v12 == 2 )
      sub_103C9AC0((int)a1, (int)&savedregs, v11, (int)a1, 0, 0);
    if ( v11 == (float *)1 || v11 == (float *)2 )
      sub_103C9AC0((int)a1, (int)&savedregs, v11, (int)a1, 0, 1);
    if ( 0.0 == a1[1422] )
    {
      if ( !v11 || v11 == (float *)2 )
        sub_103C95E0((int)a1, 0, 0);
      if ( v11 == (float *)1 || v11 == (float *)2 )
        sub_103C95E0((int)a1, 0, 1u);
      a1[1422] = 1.0;
    }
    sub_100D78A0(v47, (int)a1, 0.80000001);
    sub_100D1290(v39);
    if ( !(unsigned __int8)sub_1023A760((int)"NPC_Vortigaunt.ZapPowerup", (int)v39, 0) )
      goto LABEL_71;
    goto LABEL_70;
  }
  if ( v4 != dword_106EBE98 )
  {
    if ( v4 == dword_106EBE94 )
    {
      sub_103C7750((int)a1);
      return;
    }
    if ( v4 == dword_106EBE90 )
    {
      sub_103C95E0((int)a1, 1u, 1u);
      *((_DWORD *)a1 + 1433) = 1;
      return;
    }
    if ( v4 == dword_106EBE88 )
    {
      sub_100D78A0(v47, (int)a1, 0.80000001);
      sub_100D1290(v39);
      if ( !(unsigned __int8)sub_1023A760((int)"NPC_Vortigaunt.StartHealLoop", (int)v39, 0) )
      {
LABEL_71:
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v47);
        return;
      }
    }
    else
    {
      if ( v4 == dword_106EBE84 )
      {
        sub_1023C380(a1, (int)"NPC_Vortigaunt.Swing", 0.0, 0);
        return;
      }
      if ( v4 != dword_106EBE80 )
      {
        if ( v4 == 1 )
        {
          sub_1023C380(a1, (int)"NPC_Vortigaunt.FootstepLeft", *(float *)(a3 + 12), 0);
        }
        else if ( v4 == 2 )
        {
          sub_1023C380(a1, (int)"NPC_Vortigaunt.FootstepRight", *(float *)(a3 + 12), 0);
        }
        else
        {
          sub_10399420((char *)a1, (_DWORD *)a3);
        }
        return;
      }
      if ( *(float *)(dword_106B31C8 + 12) < (double)a1[1423] )
        return;
      sub_100D78A0(v47, (int)a1, 0.80000001);
      sub_100D1290(v39);
      if ( !(unsigned __int8)sub_1023A760((int)"NPC_Vortigaunt.StartShootLoop", (int)v39, 0) )
        goto LABEL_71;
    }
LABEL_70:
    sub_1023BE90(v42, (int)v39);
    v42[5] = 150;
    v37 = sub_1001F3C0(a1);
    sub_1023BE40(v47, v37, (int)v42);
    *((_BYTE *)a1 + 5844) = 1;
    sub_102375F0(v44);
    goto LABEL_71;
  }
  sub_103C7750((int)a1);
  sub_10247FD0();
  v13 = *(const char **)(v3 + 4);
  v14 = 0;
  if ( !v13 || (v15 = atoi(v13), (v14 = v15) == 0) || v15 == 2 )
    sub_103CCC40((int)a1, 0);
  if ( v14 == 1 || v14 == 2 )
    sub_103CCC40((int)a1, 1);
  sub_103CA280((int)a1, -1);
  sub_1023C380(a1, (int)"NPC_Vortigaunt.ClawBeam", 0.0, 0);
  *((_BYTE *)a1 + 5844) = 1;
  sub_10248230();
  v16 = *((_BYTE *)a1 + 5760) == 0;
  a1[1462] = *(float *)(dword_106B31C8 + 12) + 0.75;
  if ( !v16 )
  {
    v17 = (int *)sub_100C9780((char *)a1, (int)"weapon_bugbait");
    if ( v17 )
    {
      v18 = sub_10022C40(a1);
      v19 = (float *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v18 + 576))(v18, a2);
      v20 = *a1;
      v55 = *v19;
      v56 = v19[1];
      v21 = v19[2];
      v22 = *(int (__thiscall **)(float *))(LODWORD(v20) + 576);
      v57 = v21 + 32.0;
      v23 = (float *)v22(a1);
      v49 = *v23 - v55;
      v50 = v23[1] - v56;
      v51 = v23[2] - v57;
      v24 = 0;
      *(float *)&a3 = off_10689714() * 0.33333334;
      do
      {
        v25 = sub_10022C40(a1);
        sub_10265720(v48, v25, (int)a1, 0);
        sub_10023120(COERCE_FLOAT(&savedregs), (int)a1, &v55, &v55, 1174421507, (int)v48, (int)v41);
        if ( 1.0 == v43 && !v45 )
        {
          v46[0] = 16.0;
          v46[1] = 16.0;
          v46[2] = 48.0;
          v52 = -16.0;
          v53 = -16.0;
          v54 = -16.0;
          sub_10023240(COERCE_FLOAT(&savedregs), (int)a1, &v55, &v55, &v52, v46, 1174421507, (int)v48, (int)v41);
          if ( 1.0 == v43 && !v45 )
            break;
        }
        ++v24;
        v55 = v49 * *(float *)&a3 + v55;
        v56 = v50 * *(float *)&a3 + v56;
        v57 = *(float *)&a3 * v51 + v57;
      }
      while ( v24 < 4 );
      if ( v24 == 4 && *(int *)(dword_106B31C8 + 20) <= 1 )
      {
        v26 = sub_10261B20();
        if ( v26 )
        {
          v27 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v26 + 576))(v26);
          v55 = *v27;
          v56 = v27[1];
          v57 = v27[2];
        }
      }
      sub_100E0D20((int)v17, &v55);
      v28 = *v17;
      v52 = 0.0;
      v29 = *(void (__thiscall **)(int *, float *))(v28 + 868);
      v53 = 0.0;
      v54 = 1.0;
      v29(v17, &v52);
    }
    sub_1001F130(v40);
    v30 = sub_10022C40(a1);
    v31 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v30 + 576))(v30);
    v40[0] = *v31;
    v40[1] = v31[1];
    v40[2] = v31[2];
    v32 = sub_10022C40(a1);
    v33 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v32 + 576))(v32);
    v34 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 576))(a1);
    v35 = v34[1] - v33[1];
    v36 = v34[2] - v33[2];
    v40[6] = *v34 - *v33;
    v40[7] = v35;
    v40[8] = v36;
    off_10689714();
    v40[14] = 4.0;
    sub_1028E890((int)"AntlionGib", (int)v40);
  }
  *(float *)&a3 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                    dword_106B31E4,
                    2.0,
                    3.0)
                + *(float *)(dword_106B31C8 + 12);
  sub_1002ABA0(a1 + 418, (float *)&a3);
}
