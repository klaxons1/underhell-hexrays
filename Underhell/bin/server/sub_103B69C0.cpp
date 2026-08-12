void __userpurge sub_103B69C0(int a1@<ecx>, int a2@<edi>, int a3)
{
  int v4; // esi
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // edi
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  float v14; // edi
  int v15; // eax
  int v16; // eax
  float *v17; // eax
  char v18; // al
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  float v23; // edi
  int v24; // eax
  _DWORD *v25; // eax
  float *v26; // eax
  float v27; // ebx
  int v28; // eax
  int v29; // eax
  int v30; // edi
  int v31; // eax
  int v32; // [esp+10h] [ebp-70h]
  int v33; // [esp+10h] [ebp-70h]
  int v34; // [esp+10h] [ebp-70h]
  float v35; // [esp+20h] [ebp-60h] BYREF
  int v36[3]; // [esp+24h] [ebp-5Ch] BYREF
  int v37[8]; // [esp+30h] [ebp-50h] BYREF
  int v38[3]; // [esp+50h] [ebp-30h] BYREF
  float v39[3]; // [esp+5Ch] [ebp-24h] BYREF
  int v40[3]; // [esp+68h] [ebp-18h] BYREF
  int v41; // [esp+74h] [ebp-Ch] BYREF
  float v42; // [esp+78h] [ebp-8h]
  float v43; // [esp+7Ch] [ebp-4h]
  int v44; // [esp+88h] [ebp+8h]

  v4 = a1;
  switch ( *(_DWORD *)a3 )
  {
    case 0x18:
      sub_10043980((int *)a1, 21, *(float *)(a3 + 4));
      return;
    case 0x4A:
      v12 = sub_100CF460((_DWORD *)a1);
      if ( v12 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 1068))(v12);
      else
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v4 + 1312))(v4, "no primary weapon");
      goto LABEL_7;
    case 0x96:
      if ( a1 )
        v44 = a1 + 3620;
      else
        v44 = 0;
      v7 = *(_DWORD **)(a1 + 3640);
      v8 = sub_103AFAE0(v7);
      sub_103B1710((int)v7, v44, v8, 5.0);
      sub_10022750((float *)v4, *(float *)(a3 + 4), 0.0);
      *(float *)(v4 + 3668) = 0.0;
      *(float *)(v4 + 3672) = 0.0;
      sub_10019C10((_DWORD *)v4, dword_106EAD58, 0.0);
      sub_10019C10((_DWORD *)v4, dword_106EAD54, *(float *)(v4 + 3672));
      sub_100BD6D0((void *)v4, dword_106EAD50, (int)v38, 0, 0, 0);
      sub_10154AF0((_DWORD *)v4, 1);
      sub_10154BB0(2);
      sub_10154CA0((int)v38);
      sub_10154B90();
      sub_10165630(v37, v4, (int)"NPC_Strider.Charge");
      v9 = *(_DWORD *)(v4 + 24);
      v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v9);
      sub_1023C580((int)v7, v9, v37, v10, (int)"NPC_Strider.Charge", 0, 0.0, 0);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v37);
      return;
    case 0x97:
    case 0xA2:
      return;
    case 0x98:
      *(float *)(a1 + 3656) = *(float *)(dword_106B31C8 + 12) + 5.0;
      v11 = dword_106EAD78;
      if ( *(float *)(a3 + 4) <= 0.0 )
        v11 = dword_106EAD7C;
      sub_10043E90((int *)a1, v11);
      return;
    case 0x99:
      sub_10039F40((int *)a1, dword_106EAD60);
      return;
    case 0x9A:
      goto LABEL_39;
    case 0x9B:
      if ( !sub_10022C70((_DWORD *)a1) )
        return;
      v32 = dword_10679E0C;
      v13 = sub_10022C70((_DWORD *)v4);
      sub_1001EE90(&v35, 3, (float *)(v13 + 716), 6, -1.0, 1, v32);
      v14 = *(float *)v4;
      v15 = sub_10022C70((_DWORD *)v4);
      (*(void (__thiscall **)(int, int, int *))(LODWORD(v14) + 2040))(v4, v15, v36);
      v16 = *(_DWORD *)(v4 + 236);
      if ( (v16 & 0x1000) != 0 && (v16 & 0x4000) != 0 )
      {
        v17 = (float *)sub_10019640((_DWORD *)v4);
        v40[0] = *(int *)v17;
        v40[1] = *((int *)v17 + 1);
        *(float *)&v40[2] = v17[2] + 4.0;
        sub_1011BC50((float *)v40, (float *)v36, 255, 0, 255, 1, 3.0);
      }
      v18 = (*(int (__thiscall **)(_DWORD, float *, _DWORD))(**(_DWORD **)(v4 + 2588) + 20))(
              *(_DWORD *)(v4 + 2588),
              &v35,
              0);
      a1 = v4;
      if ( v18 )
LABEL_39:
        sub_10027CD0((_DWORD *)a1, 0);
      else
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 1312))(v4, 11);
      break;
    case 0x9C:
      if ( sub_102DC130((unsigned int *)(a1 + 3800)) )
      {
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v4 + 1312))(v4, "No cannon target!\n");
      }
      else
      {
        v34 = dword_10679E0C;
        v25 = (_DWORD *)sub_1026A890((unsigned int *)(v4 + 3800));
        v26 = (float *)sub_10019640(v25);
        sub_10042450(&v35, v26, -1, -1.0, 0, v34);
        v27 = *(float *)v4;
        v28 = sub_1026A890((unsigned int *)(v4 + 3800));
        (*(void (__thiscall **)(int, int, int *))(LODWORD(v27) + 2040))(v4, v28, v36);
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD, float *, int))(**(_DWORD **)(v4 + 2588) + 20))(
               *(_DWORD *)(v4 + 2588),
               &v35,
               2) )
        {
LABEL_4:
          sub_10027CD0((_DWORD *)v4, 0);
        }
        else
        {
          DevWarning(2, "GetPathToCannonTarget failed!!\n");
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 1312))(v4, 11);
        }
      }
      break;
    case 0x9D:
      if ( (unsigned __int8)sub_103E0CF0(0) )
      {
        v29 = sub_1026A890((unsigned int *)(v4 + 3800));
        v30 = *(_DWORD *)(v4 + 2604);
        v31 = (*(int (__thiscall **)(int))(*(_DWORD *)v29 + 576))(v29);
        sub_10078690(v30, v31, 0.0, 0.0);
        (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 2076))(v4);
      }
      else
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 1312))(v4, 1);
      }
      return;
    case 0x9E:
      sub_103AEED0((float *)a1, *(float *)(a3 + 4));
      goto LABEL_39;
    case 0x9F:
      if ( sub_103B0EE0((_DWORD *)a1) )
      {
        v19 = sub_103B0EE0((_DWORD *)v4);
        v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 576))(v19);
        v41 = *(int *)v20;
        v21 = *(_DWORD *)(v4 + 2816);
        v42 = *(float *)(v20 + 4);
        v43 = *(float *)(v20 + 8);
        if ( sub_100B2F30(v21, a3, (float *)&v41, (float *)v38)
          || sub_100B3EF0(*(_DWORD **)(v4 + 2816), (float *)&v41, (int)&v41, 0.0, 4096.0, 1.0, (float *)v38) )
        {
          sub_10042450(&v35, (float *)v38, 11, -2.0, 0, dword_10679E0C);
          (*(void (__thiscall **)(_DWORD, float *, int))(**(_DWORD **)(v4 + 2588) + 20))(
            *(_DWORD *)(v4 + 2588),
            &v35,
            2);
          v39[0] = *(float *)&v41 - *(float *)v36;
          v39[1] = v42 - *(float *)&v36[1];
          v39[2] = v43 - *(float *)&v36[2];
          sub_1007DF40((int)v39);
          v22 = sub_103B0EE0((_DWORD *)v4);
          v23 = *(float *)v4;
          v33 = (*(int (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v22 + 576))(v22, 5.0, 5.0, 0.0);
          v24 = sub_103B0EE0((_DWORD *)v4);
          (*(void (__thiscall **)(int, int, int))(LODWORD(v23) + 1704))(v4, v24, v33);
        }
        else
        {
          (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v4 + 1312))(v4, "Can't get LOS to Cannon Target");
        }
      }
      else
      {
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v4 + 1312))(v4, "No Cannon Target");
      }
      return;
    case 0xA0:
      if ( sub_1026A890((unsigned int *)(a1 + 3800)) )
      {
        v5 = sub_1026A890((unsigned int *)(v4 + 3800));
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 576))(v5);
        sub_103AEF10(v4, *(float *)(v6 + 8));
      }
LABEL_7:
      sub_10027CD0((_DWORD *)v4, 0);
      return;
    case 0xA1:
      sub_103B5A80(a1, a2);
      goto LABEL_4;
    default:
      sub_10046510(a1, a3);
      return;
  }
}
