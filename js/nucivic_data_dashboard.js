(function ($) {
  Drupal.behaviors.dataDashboardMenu = {
    attach: function(context){
      $dropwdown = $('.dropdown-toggle').on('click', function(e){
        $childMenu = $(this).next('.dashboard-nested-menu');
        $('.dashboard-nested-menu').not($childMenu).hide();
        $childMenu.toggle();
      });

      $nestedMenu = $('.block-nucivic-data-dashboard-user-summary .dropdown-menu');

      $nestedMenu
      .removeClass('dropdown-menu')
      .addClass('dashboard-nested-menu');

      $nestedMenu.hide();


    }
  }
})(jQuery);