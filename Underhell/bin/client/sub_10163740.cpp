int __stdcall sub_10163740(int a1)
{
  int v1; // eax
  int v2; // edi
  int v3; // eax
  int v5[8]; // [esp+24h] [ebp-3Ch] BYREF
  int v6; // [esp+44h] [ebp-1Ch] BYREF
  float v7; // [esp+48h] [ebp-18h]
  float v8; // [esp+4Ch] [ebp-14h]
  int v9; // [esp+50h] [ebp-10h] BYREF
  float v10; // [esp+54h] [ebp-Ch]
  float v11; // [esp+58h] [ebp-8h]
  int v12; // [esp+5Ch] [ebp-4h]

  ((void (__thiscall *)(int (__stdcall ***)(char), int))(*off_103DFD80)[11])(off_103DFD80, 1);
  sub_1009B510(1);
  LOBYTE(v12) = (*(int (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578);
  (*(void (__thiscall **)(int *, _DWORD))(*off_103ED578 + 116))(off_103ED578, 0);
  sub_1015B880(v5);
  v5[0] = (int)&CBroadcastRecipientFilter::`vftable';
  sub_1015BB40(v5);
  switch ( sub_1022A800("te", 0) )
  {
    case 0:
      sub_101688B0(v5, 0.0, a1);
      break;
    case 1:
      sub_10174C80(v5, 0.0, a1);
      break;
    case 2:
      sub_10168EB0(v5, 0.0, a1);
      break;
    case 3:
      sub_1022A940("originx", 0.0);
      *(float *)&v6 = 0.0;
      sub_1022A940("originy", 0.0);
      v7 = 0.0;
      sub_1022A940("originz", 0.0);
      v8 = 0.0;
      sub_1022A940("anglesx", 0.0);
      *(float *)&v9 = 0.0;
      sub_1022A940("anglesy", 0.0);
      v10 = 0.0;
      sub_1022A940("anglesz", 0.0);
      v11 = 0.0;
      sub_1022A940("scale", 0.0);
      sub_1022A800("type", 0);
      sub_101720B0((int)v5, COERCE_INT(0.0), (int)&v6, (int)&v9, 0.0);
      break;
    case 4:
      sub_1022A940("originx", 0.0);
      *(float *)&v9 = 0.0;
      sub_1022A940("originy", 0.0);
      v10 = 0.0;
      sub_1022A940("originz", 0.0);
      v11 = 0.0;
      sub_1022A940("directionx", 0.0);
      *(float *)&v6 = 0.0;
      sub_1022A940("directiony", 0.0);
      v7 = 0.0;
      sub_1022A940("directionz", 0.0);
      v8 = 0.0;
      sub_10164E50(v5, 0.0, &v9, &v6);
      break;
    case 5:
      sub_1022A940("originx", 0.0);
      *(float *)&v9 = 0.0;
      sub_1022A940("originy", 0.0);
      v10 = 0.0;
      sub_1022A940("originz", 0.0);
      v11 = 0.0;
      sub_1022A940("directionx", 0.0);
      *(float *)&v6 = 0.0;
      sub_1022A940("directiony", 0.0);
      v7 = 0.0;
      sub_1022A940("directionz", 0.0);
      v8 = 0.0;
      sub_10164D20(v5, 0.0, &v9, &v6);
      break;
    case 6:
      sub_1022A940("originx", 0.0);
      *(float *)&v6 = 0.0;
      sub_1022A940("originy", 0.0);
      v7 = 0.0;
      sub_1022A940("originz", 0.0);
      v8 = 0.0;
      sub_1022A940("scale", 0.0);
      v1 = sub_1022A800("framerate", 0);
      sub_10173C10((int)v5, COERCE_INT(0.0), (int)&v6, 0, 0.0, v1);
      break;
    case 7:
      sub_1022A940("originx", 0.0);
      *(float *)&v9 = 0.0;
      sub_1022A940("originy", 0.0);
      v10 = 0.0;
      sub_1022A940("originz", 0.0);
      v11 = 0.0;
      sub_1022A940("directionx", 0.0);
      *(float *)&v6 = 0.0;
      sub_1022A940("directiony", 0.0);
      v7 = 0.0;
      sub_1022A940("directionz", 0.0);
      v8 = 0.0;
      v2 = sub_1022A800("magnitude", 0);
      v3 = sub_1022A800("traillength", 0);
      sub_10173EF0(v5, 0.0, &v9, v2, v3, &v6);
      break;
    case 8:
      sub_101667B0(v5, 0.0, a1);
      break;
    case 9:
      sub_10167620(v5, 0.0, a1);
      break;
    case 10:
      sub_1016B150((int)v5, 0.0, a1);
      break;
    case 11:
      sub_10172E20(v5, 0.0, a1);
      break;
    case 12:
      sub_10174370(v5, 0.0, a1);
      break;
    case 13:
      sub_10174840(v5, 0.0, a1);
      break;
    case 15:
      sub_10167040(v5, 0.0, a1);
      break;
    case 16:
      sub_1016ABE0(v5, 0.0, a1);
      break;
    case 17:
      sub_10168390(v5, 0.0, a1);
      break;
    case 18:
      sub_101737B0(v5, 0.0, a1);
      break;
    case 19:
      sub_10169AE0(v5, 0.0, a1);
      break;
    default:
      break;
  }
  sub_1009B510(0);
  ((void (__thiscall *)(int (__stdcall ***)(char), _DWORD))(*off_103DFD80)[11])(off_103DFD80, 0);
  (*(void (__thiscall **)(int *, int))(*off_103ED578 + 116))(off_103ED578, v12);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v5);
}
