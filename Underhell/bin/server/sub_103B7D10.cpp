void __userpurge sub_103B7D10(int a1@<ecx>, int a2@<edi>, int a3)
{
  int v4; // eax
  int v5; // ebx
  _DWORD *v6; // edi
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // eax
  float *v10; // eax
  void (__stdcall *v11)(_DWORD *, _DWORD, float *); // edx
  _DWORD *v12; // edi
  int v13; // eax
  _DWORD *v14; // esi
  int v15; // eax
  int v16[8]; // [esp+14h] [ebp-5Ch] BYREF
  float v17[3]; // [esp+34h] [ebp-3Ch] BYREF
  float v18[3]; // [esp+40h] [ebp-30h] BYREF
  float v19[3]; // [esp+4Ch] [ebp-24h] BYREF
  _DWORD v20[3]; // [esp+58h] [ebp-18h] BYREF
  int v21[3]; // [esp+64h] [ebp-Ch] BYREF

  if ( *(int *)a3 > 999 )
  {
LABEL_26:
    sub_1003AD70(a1, a3);
  }
  else if ( *(_DWORD *)a3 == 999 )
  {
    sub_103B51C0((_DWORD *)a1);
  }
  else
  {
    switch ( *(_DWORD *)a3 )
    {
      case 1:
      case 4:
      case 7:
        sub_103B5E20((void *)a1, v19, *(float *)(a3 + 12));
        return;
      case 2:
      case 5:
      case 8:
        sub_103B5EB0((void *)a1, v18, *(float *)(a3 + 12));
        return;
      case 3:
      case 6:
      case 9:
        sub_103B5F40((void *)a1, v17, *(float *)(a3 + 12));
        return;
      case 0xB:
        sub_100BF1B0((void *)a1, "left foot", (int)v21, 0, 0, 0);
        goto LABEL_21;
      case 0xC:
        sub_100BF1B0((void *)a1, "right foot", (int)v21, 0, 0, 0);
        goto LABEL_21;
      case 0xD:
        sub_100BF1B0((void *)a1, "back foot", (int)v21, 0, 0, 0);
LABEL_21:
        sub_10165630(v16, a1, (int)"NPC_Strider.Whoosh");
        sub_1023C580(a2, a1, v16, 0, (int)"NPC_Strider.Whoosh", (int)v21, 0.0, 0);
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v16);
        break;
      case 0x15:
      case 0x16:
      case 0x17:
        sub_1023C380((_DWORD *)a1, (int)"NPC_Strider.Creak", 0.0, 0);
        break;
      case 0x64:
        sub_103B5A80(a1, a2);
        break;
      case 0x65:
        sub_104157D0(a1 + 3676, a1 + 3688, a1, 2.5);
        break;
      case 0x69:
        v9 = sub_1012C5B0(0, *(char **)(a3 + 4), a1, a1, 0);
        if ( v9 )
        {
          v10 = sub_100EA2C0((int)(v9 + 80));
          *(float *)v20 = *v10;
          *(float *)&v20[1] = v10[1];
          v11 = **(void (__stdcall ***)(_DWORD *, _DWORD, float *))(a1 + 3620);
          *(float *)&v20[2] = v10[2];
          v11(v20, 0.0, &flt_106F1CA8);
        }
        break;
      case 0x6E:
        sub_103B3F80(a1, 4);
        break;
      case 0x6F:
        sub_103B3F80(a1, 5);
        break;
      case 0x70:
      case 0x71:
        v12 = (_DWORD *)(a1 + 3796);
        v13 = sub_1026A890((unsigned int *)(a1 + 3796));
        v14 = (_DWORD *)v13;
        if ( v13 )
        {
          sub_10165630(v16, v13, (int)"NPC_Strider.RagdollDetach");
          v15 = sub_1001F3C0(v14);
          sub_1023C580((int)v12, (int)v14, v16, v15, (int)"NPC_Strider.RagdollDetach", 0, 0.0, 0);
          sub_101CB440((int)v14);
          std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v16);
        }
        *v12 = -1;
        break;
      case 0x72:
        v4 = sub_103B0EE0((_DWORD *)a1);
        sub_103B7180((float *)a1, v4, 0.1);
        if ( a1 )
          v5 = a1 + 3620;
        else
          v5 = 0;
        v6 = *(_DWORD **)(a1 + 3640);
        v7 = sub_103AFAE0(v6);
        sub_103B1710((int)v6, v5, v7, 5.0);
        *(float *)(a1 + 3668) = 0.0;
        *(float *)(a1 + 3672) = 0.0;
        sub_10019C10((_DWORD *)a1, dword_106EAD58, 0.0);
        sub_10019C10((_DWORD *)a1, dword_106EAD54, *(float *)(a1 + 3672));
        sub_100BD6D0((void *)a1, dword_106EAD50, (int)v20, 0, 0, 0);
        sub_10154AF0((_DWORD *)a1, 1);
        sub_10154BB0(2);
        sub_10154CA0((int)v20);
        sub_10154B90();
        sub_10165630(v16, a1, (int)"NPC_Strider.Charge");
        v8 = sub_1001F3C0((_DWORD *)a1);
        sub_1023C580((int)v6, a1, v16, v8, (int)"NPC_Strider.Charge", 0, 0.0, 0);
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v16);
        break;
      default:
        goto LABEL_26;
    }
  }
}
