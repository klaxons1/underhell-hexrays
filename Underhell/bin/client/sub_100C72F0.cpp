void sub_100C72F0()
{
  int i; // esi
  int v1; // eax

  for ( i = dword_10430BEC; i; i = *(_DWORD *)i )
  {
    v1 = (*(int (**)(void))(i + 4))();
    if ( v1 )
      sub_100B62A0(&dword_1042FB78, v1);
  }
}
